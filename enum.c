#include<stdio.h>

enum LED_state
{
    ON,OFF,blink,error
};

int main()
{
    printf("\n\n\n%d\n\n\n",blink);
    int response;
    printf("Choose one from the following to compare with enum storage placement: \n1.ON\t2.OFF\t3.blink\t4.erroe\n->");
    scanf("%d",response);

    if(response == ON)
    {
        printf("enum placed at %d",ON);
    }
    else if(response == OFF)
    {
        printf("enum placed at %d",OFF);
    }
    else if (response == blink)
    {
        printf("enum placed at %d",blink);
    }
    else if (response == error)
    {
        printf("enum placed at %d",error);
    }
}