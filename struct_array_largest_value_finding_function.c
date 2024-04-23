#include <stdio.h>

//structure definition
typedef struct 
{
    int data;
    char name;
}arr;

int main()
{
    //variables to store largest value, size, reference count of array structure
    int size=0;
    int largest=0;
    int d_count=1;
    int dummy;
    
    //aks user to enter the size of arry of structure
    printf("enter the size of structure: ");
    scanf("%d",&size);
    
    //creates the array of structure with the size user has entered
    arr list[size];
    
    //aks user to enter the name of index and data
    for(int j=0;j<size;j++)
    {
        int dat;
        char arr_name;
        //d_count is nothing but reference for user to know the structure's index
        printf("enter the name and data of structure %d : ",d_count++);
        scanf("%d",&dummy);
        scanf("%c%d",&arr_name,&dat);
        list[j].data = dat; //store data in array of stucture at index of looped number 
        list[j].name = arr_name; //stores the name in array of structure at index of looped number
    }
    //printf("\n%d\n",d_count);
    
    //checks the structure element which is largest in value and store its index name in node_location char vriable
    char node_location;
    for(int jd=0;jd<size;jd++)
    {
        if(list[jd].data > largest)
        {
            largest = list[jd].data;
            node_location = list[jd].name;
        }
    }
    
    //prints the largest value in array of structure and its index name
    printf("\n\nlargest value in structure: %d\nits location: %c",largest,node_location);
}