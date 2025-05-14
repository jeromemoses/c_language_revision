#include "stdio.h"

enum day {sun, mon, tue, wed, thu, fri , sat};
typedef enum day day;

void print_day(day d)
{
    switch (d)
    {
        case sun: printf(" Sunday \n"); break;
        case mon: printf(" Monday \n"); break;
        case tue: printf(" Tuesday \n"); break;
        case wed: printf(" wednesday \n"); break;
        case thu: printf(" Thursday \n"); break;
        case fri: printf(" Friday \n"); break;
        case sat: printf(" Saturday \n"); break;
        default: printf("The day number %d is invalid\n", d);
    }
}

char* get_day(day d)
{
    switch (d)
    {
        case sun: return " Sunday"; break;
        case mon: return " Monday "; break;
        case tue: return " Tuesday "; break;
        case wed: return " wednesday "; break;
        case thu: return " Thursday "; break;
        case fri: return " Friday "; break;
        case sat: return " Saturday "; break;
        default: printf("The day number %d is invalid\n", d); return 0;
    }
}

day next_day(day d)
{
    return (day)((d + 1) % 7);
}

void main()
{
    day today = sun;

    // calling a function by value - prints the day string
    print_day(today);
    
    //printing the next day
    printf("the next day to %s is %s", get_day(today), get_day(next_day(today)));
}