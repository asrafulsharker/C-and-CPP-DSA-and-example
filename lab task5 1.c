#include<stdio.h>
int main()
{
    int n,i;
    printf("Number of items n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Weight: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int size;
    printf("Bin Capacity c = ");
    scanf("%d",&size);

    int count=0,bin;
    bin=size;
    for(i=0; i<n; i++)
    {
        if(arr[i]>bin)
        {
            count++;
            bin=size-arr[i];
        }
        else
        {
            bin=bin-arr[i];
        }
    }

    printf("We need %d bins to accommodate all items.\n",count);
}
