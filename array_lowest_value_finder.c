#include<stdio.h>
int main ()
{
    //variable to store the size and lowest value of array
	int ar_size,least;
	
	//asks user to enter the size of array
	printf("entert he size of array: ");
	scanf("%d",&ar_size);
	
	//creats the array with entered size
	int arr[ar_size];
	
	//asks user to enter the element of array 
	printf("enter the array values one by one \n ");
	for(int jd=0;jd<=ar_size;jd++)
	{
		printf("\narray [%d] : ",jd);
		scanf("%d",&arr[jd]);
	}
	
	//prints the element of array
	printf("\narray = ");
	for(int dj = 0;dj<=ar_size;dj++)
	{
		printf(",%d",arr[dj]);
	}
	
	//search for the lowest value in the given array
	least = arr[0];
	for (int l = 0;l<=ar_size;l++)
	{
		if (arr[l] < least)
		{
			least = arr[l];
		}
	}
	
	//prints the lowest value from array
	printf("\nthe low value in the given array is: %d",least);
}