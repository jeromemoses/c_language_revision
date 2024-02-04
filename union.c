#include<stdio.h>
#include<string.h>

//in union we can only use one variable at a time
union union_name 
{
    int data;
    char name[50];
};


int main()
{
    //union initializer only takes the first data from this declaration
    union union_name u1 = {10,"sam"};

    //proof that string is't store since it is not a first initialized data
    printf("%d %s\n",u1.data,u1.name);

    //assigning string to a union variable
    strcpy(u1.name,"jerome");

    //if we print after string assinging the integer data will be gone since we can only use one variable inside union
    printf("%s\n",u1.name);
    printf("%d",u1.data);//prints garbage values
    return 0;
}