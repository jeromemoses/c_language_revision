#include "stdio.h"

#define name "Jerome Moses J"
#define Language "tamil/english"
#define HUMAN_NO 777
#define is_equal ==
#define greater >
#define lesser <
#define not_equal !=

#define square(x) ((x)*(x))

void main()
{
    int num = 7;
    int base = 5;

    //comparing if the number is greater or lesser with preprocessor instead of > , <
    if (base greater num)
    {
        printf("\nBase is higher than defined num\n");
    }
    else if (base lesser num)
    {
        printf("\nBase is lesser than defined num\n");
    }
    
    //comparing if the numbers are equal with preprocessor instead of ==, !=
    if (base is_equal num)
    {
        printf("\nBase and defined number are equal\n");
    }
    if (base not_equal num)
    {
        printf("\nBase is not equal with defined number\n");
    }

    // accessing preprocessor datas
    printf("\nPre-processor data:\nname: %s\nLanguage: %s\nHuman ID: %d\n",
        name,
        Language,
        HUMAN_NO);

    // accessing preprocession function
    printf("\nSquare root of given number: %d",square(num));
    
}