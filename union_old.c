#include <stdio.h>
#include<string.h>

//declaring an union
union 
{
    int age;
    char name[20];
    long int pho_no;
}stud1,stud2; //variables to union member

int main()
{
    //assigning a value union member 1 
    stud1.age = 19;
    strcpy(stud1.name,"jerome");
    stud1.pho_no = 8;
    
    printf("\n%ld\n",sizeof(stud1));
    //prints the union first member's data 
    
    
    //assigning a value union member 1 
    stud2.age = 17;
    strcpy(stud2.name,"dp");
    stud2.pho_no = 7;
    
    //prints the union second member's data 
    printf("\n\nstud2\nage: %d\nname: %s\nphone number: %ld\n",stud2.age,stud2.name,stud2.pho_no);

    
    printf("stud1\nage: %d\nname: %s\nphone number: %ld\n",stud1.age,stud1.name,stud1.pho_no);
}

