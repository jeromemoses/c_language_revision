#include <stdio.h>

typedef long int numb;
typedef int age;
int main()
{
    //declaring data with typedef predefined variables as user 1
    numb user1_pho_no = 8939513004;
    age user1_age = 19;
    //prints the data from typedef user 1
    printf("user1\nphone number: %ld\nage: %d",user1_pho_no,user1_age);
    
    //declaring data with typedef predefined variables user 2
    numb user2_pho_no = 4003159398;
    age user2_age = 21;
    //prints the data from typedef user 1
    printf("\n\nuser1\nphone number: %ld\nage: %d",user2_pho_no,user2_age);
}