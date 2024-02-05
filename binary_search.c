#include <stdio.h>

//binary serach function(only works with sorted array)
void binary_search(int arr[],int l,int r,int target)
{
    if(r >= l)
    {
        int mid = l + (r-1)/2;
        if (arr[mid] == target)
        {
            printf("Targeted value found at array[%d] index", mid);
            return;
        }

        if(arr[mid] > target)
        {
            binary_search(arr,l,mid-1,target);
            return;
        }
        binary_search(arr, mid+1, r, target);
        return;
    }
    printf("Taget Value is not present in the given array");
}

int main()
{
    int array[] = {10,20,30,40,50,60,70,80};
    int right = 7;

    binary_search(array, 0, right, 70);
}