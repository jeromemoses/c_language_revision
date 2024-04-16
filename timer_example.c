#include <stdio.h>
#include <stdbool.h>

// assume its a RTC in mcu
double rtc_time;

// current time VB
double ct;

// previous time VB
double pt;

// count start flag for distance < 300mm
bool first_fetch = 1;

// count start flag for distance != <300 for 15sec
bool dis_first_fetch = 1;

// distance VB
int distance;

// 15sec distraction time counter VB
double dis_t = 0;

// 15sec distraction previous time counter VB
double dis_pt = 0;

bool dist_flag = 0;

int main()
{

    while (1)
    {
        rtc_time += 1;

        printf("Enter the distance value:");
        scanf("%d", &distance); // enter the dummy value for distance manually

        // fetches the RTC time into pt variable
        if (first_fetch)
        {
            pt = rtc_time; // 30
        }

        // jumps to 3 minutes counter if distance < 300 and resets the RTC first fetch
        if (distance <= 300)
        {
            first_fetch = 0;
            if (ct <= pt + 10)
            {
                ct = rtc_time; // continuously passing RTC time into CT until it reaches the last fetched time + 180 sec(3 minutes)
                printf("buzzer threshold counter %lf\n", ct);
            }
            else
            {
                printf("BUZZER is triggered : ) \n");
                /*  >You sound write the buzzer alarm flag here
                    >only run if the distance is less than 300mm for 3 minutes continuously
                */
               first_fetch = 1;
            }
            dist_flag = 1;
            dis_first_fetch = 1;
        }

        // fetches the RTC time for the 15sec distraction counter
        if (dis_first_fetch)
        {
            dis_pt = rtc_time; // 30
        }

        // jumps to 15 sec counter if the distance suddenly changes > 300 and resets the distraction RTC time fetch flag
        if (distance > 300)
        {
            if (dist_flag)
            {
                dis_first_fetch = 0;
                if (dis_t <= dis_pt + 5)
                {
                    printf("Distraction sec counter :%lf\n", dis_t);
                    dis_t = rtc_time; // continuosly passing RTC time to distraction timer vb until is reached the last dis_pt fetch + 15 sec
                }
                else
                {
                    printf("Counter re-started : )");
                    first_fetch = 1;     // sets the RTC time fetch flag which makes the whole function to reset and restarts
                    dis_first_fetch = 1; // sets the distraction flag so than it will continue fetching the data for distraction time counter of 15c
                }
            }
        }
    }
}