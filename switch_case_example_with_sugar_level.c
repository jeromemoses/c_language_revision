#include<stdio.h>
int main()
{
    //asks the sugar lvl from user
    int sugar_lvl;
    printf("enter your sugar level: ");
    scanf("%d",&sugar_lvl);
    //deriving contant value for switch case
    if(sugar_lvl<=140)
    {
        sugar_lvl = 140;
    }
    else if(sugar_lvl>140 && sugar_lvl<=170)
    {
        sugar_lvl = 170;
    }
    else if(sugar_lvl>170)
    {
        sugar_lvl = 199;
    }
    //switch cases the sugar level
    switch(sugar_lvl)
    {
        //if the sugar level is 140 this statement will execute
        case 140:
        printf("\nyour sugar level is normal\n");
        break;
        
        //if the sugar level is 170 this statement will execute
        case 170:
        printf("\nyour sugar level is more than normal sugar level and can be cured with proper diet\n");
        break;
        
        //if the sugar level is above 170 this statement will execute
        case 199:
        printf("\nyour sugar level is at (high) critical condition have to consider a doctor\n");
        break;
    }
}
