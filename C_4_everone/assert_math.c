#include <stdio.h>
#include <assert.h>

void main()
{
    double x, y;
    while (1)
    {
        printf("\nenter x and y with space in between: ");
        scanf("%lf %lf", &x, &y);
        assert(y != 0);
        printf("\nwhen deviding x with y we get x/y = %lf\n", x / y);
    }
}
