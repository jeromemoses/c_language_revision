#include<stdio.h>
//declaring function calls and variables
int add();
int sub();
int mlt();
int divi();
char responce;
int dummy;

int main()
{
    //using do while to repeact the program
    do
    {
        //asking user to choose what to do
        int choice;
        printf(":) welcome to console calculator :)\n");
        printf("1.addition.\n2.subraction\n3.multiplicaton.\n4.division.\nYOUR CHOICE: ");
        scanf("%d",&choice);
        
        //performing switch depence on users choice 
        switch(choice)
         {
            case 1:
            {
                //calls the addition function
                int result;
                result = add();
                printf("result = %d\n",result);
                break;
            }
            case 2:
            {
                //cals the subraction function
                int result;
                result = sub();
                printf("result = %d\n",result);
                break;
            }
            case 3:
            {
                //calls the multiplication function 
                int result;
                result = mlt();
                printf("result = %d\n",result);
                break;
            }
            case 4:
            {
                //calls the division function 
                int result;
                result = divi();
                printf("result = %d\n",result);
                break;
            }
            default:
            {
                //printf invalid if the user choice is not available
                printf("enter the valid choice");
            }
        }
        //asks user to whether repeat the program or dont
        printf("do you want to repeact the function again\n'y'=YES  'n'=NO : ");
        scanf("%d",&dummy);
        scanf("%c",&responce);
        if (responce != 'y')
        {
            break;
        }
    }
    while(responce == 'y');
}
//addition function
int add()
{
    int j,d;
    printf("enter the two values to be added: ");
    scanf("%d%d",&j,&d);
    return j+d;
}
//subraction function
int sub()
{
    int j,d;
    printf("enter the two values to be subracted: ");
    scanf("%d%d",&j,&d);
    return j-d;
}
//multiplication function
int mlt()
{
    int j,d;
    printf("enter the two values to be multiplied: ");
    scanf("%d%d",&j,&d);
    return j*d;
}
//devision function
int divi()
{
    int j,d;
    printf("enter the two values to be divided: ");
    scanf("%d%d",&j,&d);
    return j/d;
}