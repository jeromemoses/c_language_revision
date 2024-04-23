#include<stdio.h>
int main ()
{
    //variable to store the size of row , column and dimension of 3d array
    int row;
    int colomn;
    int dimension;
    
    //variable to count the dimention while printing
    int d_count = 0;
    
    //asks user to enter the size range of row ,column and dimension of 3d array 
    printf("\nenter the size of row and coloumn  of array : ");
    scanf("%d%d",&row,&colomn);
    printf("\nenter the dimention range of the 2d array: ");
    scanf("%d",&dimension);
    
    //creates the 3d array with size user has entered
    int d_arr[row][colomn][dimension];
    
    //asks user to enter the elements of 3d aray one by one
    for(int di = 0;di<dimension;di++)
    {
        for(int ro = 0;ro<row;ro++)
        {
            for(int co = 0;co<colomn;co++)
            {
                printf("3d_array[%d][%d][%d]: ",ro,co,di);
                scanf("%d",&d_arr[ro][co][di]);
            }
        }
    }
    
    //prints the element of 3d array user has entered
    for(int di = 0;di<dimension;di++)
    {
        d_count =d_count +1;
        printf("\ndimension: %d\n",d_count);
        
        for(int ro = 0;ro<row;ro++)
        {
            for(int co = 0;co<colomn;co++)
            {
                printf("%d\t",d_arr[ro][co][di]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}
