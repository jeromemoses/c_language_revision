#include <stdio.h>

//predefining the struture to acces later
struct details
{
    char person_name[20];
    int age;
};


int main()
{
    //creating the array of structure 
    struct details medcuore_employe[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the person name: ");
        scanf("%s",&medcuore_employe[i].person_name);
        printf("Enter the age of the person: ");
        scanf("%d",&medcuore_employe[i].age);
    }
    
    //printing the data inside the array of structure
    for (int i = 0; i < 3; i++)
    {
        printf("Person name:%s\tage:%d\n",medcuore_employe[i].person_name,medcuore_employe[i].age);
    }
    
    return 0;
}