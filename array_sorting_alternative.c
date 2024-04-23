#include <stdio.h>

int main()
{
    int temp;
    int ar_size,largest;
    int alter[ar_size],m=0;
	int pl = ar_size / 2;
	printf("enter the size of array: ");
	scanf("%d",&ar_size);
	int arr[ar_size];
	printf("enter the array values one by one \n ");
	
	for(int jd=0;jd<ar_size;jd++)
	{
		printf("\narray [%d] : ",jd);
		scanf("%d",&arr[jd]);
	}
	printf("\narray = ");
	
	for(int dj = 0;dj<ar_size;dj++)
	{
		printf(",%d",arr[dj]);
	}
	
	//decend orer sorting
 for(int i = 0;i < ar_size;i++)    
    {    
        for(int j = i+1;j < ar_size;j++)    
        {    
            if(arr[j] > arr[i])    
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
   printf("\nPrinting Sorted Element arrray...\n");    
   for(int dj = 0;dj < ar_size;dj++)
	{
		printf("%d, ",arr[dj]);
	}

}

