#include <stdio.h>
#include <string.h>

//declaring structure
struct student
{
    char name[20];
    int age;
    int roll_no;
};

int main()
{
    //creating struture
    struct student std1,std2;
    
    //assigning datas to structure
    strcpy(std1.name,"jerome moses j");
    std1.age = 19;
    std1.roll_no = 77;
    
    //prints the data from structure
    printf("student name: %s\nstudent age: %d\nstudent roll number: %d\n",std1.name,std1.age,std1.roll_no);
}
