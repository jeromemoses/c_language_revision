#include <stdio.h>

int main()
{
    // declaaring mutidimensional array
    int multi_d_array[2][3] = {{0, 5, 7}, {8, 9, 3}};
    /*
    which makes like following matrix
    |0 5 7|
    |8 9 3|
    */

    // printing the value in 2nd row 3rd column
    printf("%d ", multi_d_array[1][2]);

    // printing the value in 1st row 2nd column
    printf("%d \n\n", multi_d_array[0][1]);

    // looping over a multidimensional array with nested for loop
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", multi_d_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}