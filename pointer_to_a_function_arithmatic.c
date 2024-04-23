#include <stdio.h>

//function declaration
int addition();
int subraction();
int multiplication();
int division();

int main()
{
    int responce;
   do
    {
        //declaring pointert to function
        int (*pointer)();  // function pointer
        int choice;
        
        //asks user to decise what to perform
        printf("enter the choice you want to do: \n1.addition\n2.subraction\n3.multiplication\n4.division\nchoice: ");
        scanf("%d",&choice);
        
        //switch case the user input from user
        switch(choice)
        {
            //depence on user decision pointer will point at the on acorrding function
            case 1:
            {
                pointer = addition;//function pointer pointing at the addition function
                int result = (*pointer)();
                printf("addition sum value derived by pointer to function = %d",result);
                break;
            }
            case 2:
            {
                pointer = subraction;//function pointer pointing at the subraction function
                int result = (*pointer)();
                printf("subraction sum value derived by pointer to function = %d",result);
                break;
            }
            case 3:
            {
                pointer = multiplication;//function pointer pointing at the multiplication function
                int result = (*pointer)();
                printf("multiplied sum value derived by pointer to function = %d",result);
                break;
            }
            case 4:
            {
                pointer = division;//function pointer pointing at the divition function
                int result = (*pointer)();
                printf("divided sum value derived by pointer to function = %d",result);
                break;
            }
            default:
            {
                //if the input is invalid it asks user whether to re-enter the choice or exit a fuynction
                printf("you enter the invalid choice\ndo you want to retry 1 = yes , 0 = no: ");
                scanf("%d",&responce);
                break;
            }
        }
        if(responce == 0)
        {
            break;
        }
    }
    while(responce == 1);//loop will run again by user decision
}

//adition function definition
int addition()
{
    int a,b;
    printf("\nenter the two value to be added: \n");
    scanf("%d%d",&a,&b);
    return a+b;
}

//subraction function definition
int subraction()
{
    int a,b;
    printf("\nenter the two value to be subracted: \n");
    scanf("%d%d",&a,&b);
    return a-b;
}

//multiplication function definition
int multiplication()
{
    int a,b;
    printf("\nenter the two value to be multiplied: \n");
    scanf("%d%d",&a,&b);
    return a*b;
}

//division function definition
int division()
{
    int a,b;
    printf("\nenter the two value to be divided: \n");
    scanf("%d%d",&a,&b);
    return a/b;
}
