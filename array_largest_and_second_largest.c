#include<stdio.h>

int main ()
{
    //variables to store the size ,largest value and second larget value in array
	int ar_size,largest,sec_large=0;
	
	//asks user to enter the size of array
	printf("entert he size of array: ");
	scanf("%d",&ar_size);
	
	//creats the array with entered array size
	int arr[ar_size];
	
	//asks user to enter the element of array one by one
	printf("enter the array values one by one \n ");
	for(int jd=0;jd<=ar_size;jd++)
	{
		printf("\narray [%d] : ",jd);
		scanf("%d",&arr[jd]);
	}
	
	//prints the array elements
	printf("\narray = ");
	for(int dj = 0;dj<=ar_size;dj++)
	{
		printf(",%d",arr[dj]);
	}
	
	//searchs for largest value from array
	largest = arr[0];
	sec_large = arr[1];
	for (int l = 0;l<=ar_size;l++)
	{
		if (arr[l] > largest)
		{
			largest = arr[l];
		}
	}
	
	//searchs for the second largest value from array
	for(int jdl=0;jdl<=ar_size;jdl++)
	{
	    if(arr[jdl]>sec_large && arr[jdl]<largest)
		{
		    sec_large = arr[jdl];
		}
	}
	
	//prints the largest value from array
	printf("\nthe largest value in the given array is: %d",largest);
	
	//prints the lowest value from array
	printf("\nthe sec_largest value in the given array is: %d",sec_large);
}
