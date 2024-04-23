#include<stdio.h>

//variable to store array size
int ar_size;

//variable to store larger values from array
int largest;
int sec_large=0;

//variable to store lowest value from array
int low;
int sec_low;
int third_low;

//function declaration
int find_sec_large(int *la);
int find_third_low(int *lo);

int main ()
{
    
	//asks user to enter the size of variable
	printf("enter the size of array: ");
	scanf("%d",&ar_size);
	
	//creates the array with a size user has entered 
	int arr[ar_size];
	
	//asks user to enter the element of array 
	printf("enter the array values one by one \n ");
	for(int jd=0;jd<ar_size;jd++)
	{
		printf("\narray [%d] : ",jd);
		scanf("%d",&arr[jd]);
	}
	
	//prints the array element user have entered
	printf("\narray = ");
	for(int dj = 0;dj<ar_size;dj++)
	{
		printf(",%d",arr[dj]);
	}
	
	//prints the second largest value of array which is returned by find_sec_large() function 
    printf("\nthe second largest value in the given array is: %d",find_sec_large(arr));
    
    //prints the third lowest value of array which is returned by find_third_low() function
    printf("\nthe third lowest value in the given array is: %d",find_third_low(arr));
}

int find_sec_large(int *la)
{
    
    //finds and stores the first largest in largest variable
	largest = la[0];
	for (int l = 0;l<ar_size;l++)
	{
		if (la[l] > largest)
		{
			largest = la[l];
		}
	}
	
	//finds and stores the second largest value in second largest variable
	sec_large = la[1];
	for(int jdl=0;jdl<ar_size;jdl++)
	{
	    if(la[jdl]>sec_large && la[jdl]<largest)
		{
		    sec_large = la[jdl];
		}
	}
	return sec_large; //returns the second largest value of given array
}

int find_third_low(int *lo)
{
    //stores the lowest value in low variable 
	low = largest;
	for (int l = 0;l<ar_size;l++)
	{
		if (lo[l] < low)
		{
			low = lo[l];
		}
	}
	
	//passing the second least value to sec_low variable
	sec_low = largest;
	for (int ljd = 0;ljd<ar_size;ljd++)
	{
		if (lo[ljd] > low && lo[ljd] < sec_low)
		{
			sec_low = lo[ljd];
		}
	}
	
	//finds the third lowest value value in array
	third_low = largest;
	for(int j = 0;j<ar_size;j++)
	{
	    if(lo[j] > sec_low && lo[j] < third_low)
	    {
	        third_low = lo[j];
	    }
	} 
	
	return third_low;  //return the third lowest value of given array 
	
}