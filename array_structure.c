#include <stdio.h>
//declaring the structure wth typedef
typedef struct 
{
    long int roll_no;
    char name[20];
}stud; //variable namr to structure

int main()
{
    stud group1[5]; //creating the array of structure
    
    //receving the datas from user for 5 set of structure array
    for(int i = 1;i <= 5;i++)
    {
        printf("\nname of student %d : ",i);
        scanf("%s",&group1[i].name);
        printf("\nroll number of student %d : ",i);
        scanf("%ld",&group1[i].roll_no);
    }
    
    //printing the received data from user
    for(int j = 1;j<=5;j++)
    {
        printf("\ngroup1 student %d\nname: %s\nroll number: %ld\n\n",j,group1[j].name,group1[j].roll_no);
    }
    
}
