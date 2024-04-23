#include<stdio.h>
int main ()
{
    //variable to store the size, lowest value and second lowest value of the array
	int ar_size,least,sec_least;
	
	//asks user to enter the size of array
	printf("enter the size of array: ");
	scanf("%d",&ar_size);
	
	//creats the array with entered size
	int arr[ar_size];
	
	//asks user to enter the elements of array one by one 
	printf("enter the array values one by one \n ");
	for(int jd=0;jd<=ar_size;jd++)
	{
		printf("\narray [%d] : ",jd);
		scanf("%d",&arr[jd]);
	}
	
	//prints the array data 
	printf("\narray = ");
	for(int dj = 0;dj<=ar_size;dj++)
	{
		printf(",%d",arr[dj]);
	}
	
	//stores the highest valu in sec_lest variable
	for (int l = 0;l<=ar_size;l++)
	{
		if (arr[l] > sec_least)
		{
			sec_least = arr[l];
		}  
	}
	
    //stores the lowest value in least variable 
    least = arr[0];
	for (int l = 0;l<=ar_size;l++)
	{
		if (arr[l] < least)
		{
			least = arr[l];
		}
	}
	
	//passing the second least vale to sec_least variable
	for (int ljd = 0;ljd<=ar_size;ljd++)
	{
		if (arr[ljd] > least && arr[ljd] < sec_least)
		{
			sec_least = arr[ljd];
		}
	}
	
	//prints the lowest value of array
	printf("\nthe low value in the given array is: %d",least);
	
	//prints the second lowest value of array
	printf("\nthe second lowest value in the given array is: %d",sec_least);
}