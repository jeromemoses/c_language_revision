#include <stdio.h>
#include<string.h>

//dclaring typedef structure
typedef struct students
{
    char name[20];
    int age;
    long int ph_no;
}stud;

int main()
{
    //creating structure with the help of typedef predefined variable names stud
    stud sd1;
    stud sd2;
    
    //assigning datas to the first typedef structure
    strcpy(sd1.name,"jerome moses j");
    sd1.age = 19;
    sd1.ph_no = 8939513004;
    printf("student 1 \nname: %s\nage: %d\nphone number: %ld",sd1.name,sd1.age,sd1.ph_no);
    
    //assigning datas to the second typedef structure
    strcpy(sd2.name,"keerthivasan");
    sd2.age = 23;
    sd2.ph_no = 123456787;
    printf("\n\nstudent 2\nname: %s\nage: %d\nphone number: %ld",sd2.name,sd2.age,sd2.ph_no);
}