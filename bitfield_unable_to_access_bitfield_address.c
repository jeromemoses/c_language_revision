#include <stdio.h>
//dclaring structure to acces it bitfield
struct test {
	unsigned int x : 5; //bitfeild member
	unsigned int y;
	unsigned int z;
};

int main()
{
    //creating structure named as t
	struct test t;

	// the program compile and run
	printf("\nAddress of t.x is %p", &t.x);

	// The below line works fine as z is not a bit field member
	printf("\nAddress of t.z is %p", &t.z);

}