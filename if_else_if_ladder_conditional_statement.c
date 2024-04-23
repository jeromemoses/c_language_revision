#include <stdio.h>

int main()
{
    //asks the mark from user
    int mark;
    printf("enter your mark: ");
    scanf("%d",&mark);
    
    //if the mark in above 85 this statement will execute
    if(mark>=85 && mark <= 100)
    {
        printf("\ncongrats you scored A grade\n");
    }
    
    //if the mark in below 85 and above 60 this statement will execute
    else if(mark>=60 && mark<85)
    {
        printf("\nyou scored B grade\n");
    }
    
    //if the mark in below 60 and above 40 this statement will execute
    else if(mark>=40 && mark<60)
    {
        printf("\nyou scored B grade\n");
    }
    
    //if the mark in below 40 and above 30 this statement will execute
    else if(mark>=30 && mark<40)
    {
        printf("\nyou scored C grade\n");
    }
    
    //if the mark is lesser than 30 this statement will execute
    else
    {
        printf("\nsorry you are failed\n");
    }
}

