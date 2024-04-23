#include <stdio.h>

int main()
{
    //variables to store actual and dummy amount user have
    int temp;
    int amount;
    
    //variable to store the array size and largest value in array
    int ar_size,largest;
    int n_buy;
    
    //askes user to entert the amount they have
    printf("enter the amount: ");
    scanf("%d",&amount);
    
    //asks the number of mobile available
	printf("enter the number of mobile: ");
	scanf("%d",&ar_size);
	
	//creats the array with the size of mobile count
	int arr[ar_size];
	
	//asks user to enter the price of mobile one by one
	printf("enter the mobile prices one by one \n ");
	for(int jd=0;jd<ar_size;jd++)
	{
		scanf("%d",&arr[jd]);
	}
	
	//sorts the ammount array in descending order
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
    
    //compare the user amount and calculates how many mobile can be bought for their amount
    for(int i = 0;i<ar_size;i++)
    {
        if(arr[i] <= amount)
        {
            printf("\nyou can by mobile with price of: %d",arr[i]);
            n_buy++;
            amount = amount - arr[i];
        }
    }
    
    //prints the number of mobile user can buy.
    printf("\nnumber of mobile you can buy : %d",n_buy);
}
