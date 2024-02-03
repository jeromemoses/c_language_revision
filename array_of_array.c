#include <stdio.h>

void print_array(int array[3][3])
{
    // for loop for rows
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {
        {2, 3, 5},
        {7, 9, 12},
        {100, 45, 3}};

    //int arrt[2][3];
    //printf("%d\n",arrt);
    //printf("%d\n",arrt+1);

    print_array(arr);

    printf("Enter the row and column to acces its data: ");
    int row, column;
    scanf("%d%d", &row, &column);
    printf("the value present in given index is %d :)", arr[row - 1][column - 1]);

    return 0;
}