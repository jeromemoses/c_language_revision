#include <stdio.h>

//predefining the struture to acces later
struct details
{
    char person_name[20];
    int age;
};


int main()
{
    //creating the structures annd storing some datas
    struct details p1 = {"jerome",21};
    struct details p2 = {"arun",20};
    struct details p3 = {"lokesh",20};

    //printing the data from structure we created
    printf("given person name : %s \tage :%d \n",p1.person_name,p1.age);
    printf("given person name : %s \tage :%d \n",p2.person_name,p2.age);
    printf("given person name : %s \tage :%d \n",p3.person_name,p3.age);

    printf("size of the structure: %d",sizeof(p1));

    //use '.' to access the data inside the a structure (<structure_name>.<variable_name>) --> p1.age
}