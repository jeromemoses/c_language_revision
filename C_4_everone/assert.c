// #define NDEBUG 
#include <stdio.h>
#include <assert.h>

void main()
{
    // aborting using assert
    assert(0);    

    printf("you'll never see this program running without NDEBUG");
}