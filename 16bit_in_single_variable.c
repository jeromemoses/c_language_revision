#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

uint16_t arr[32];

uint32_t var3;

int main()
{
    //storing a 2 diffrent integer in a 16 bit array
    arr[20] = 1100;
    arr[19] = 10;

    int add_last4_dig = arr[20];
    int add_bln_dig = arr[19];

    printf("add_last4_dig\t%d \n", add_last4_dig);
    printf("add_bln_dig\t%d \n", add_bln_dig);

    // Determine the number of digits in var1
    int num_digits_var1 = 0;
    int temp = add_last4_dig;
    while (temp > 0)
    {
        num_digits_var1++;
        printf("%d\n",num_digits_var1);
        temp /= 10;
    }

    //simple multiplys the number count at 10 - 100 - 1000 - 10000 so on
    // Calculate the multiplier to shift var
    int multiplier = pow(10, num_digits_var1);

    //simply adding the last byte integers with multiplied number
    // Combine var and var1 into var3
    var3 = add_bln_dig * multiplier + add_last4_dig;

    printf("\nvar3 %d \n", var3);
}