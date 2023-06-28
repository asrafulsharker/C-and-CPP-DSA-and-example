#include<stdio.h>
int main()
{
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size],j,i;

    printf("Enter the Element of the array:\n");
     for(j=1;j<size;j++)
    {
        scanf("%d",&arr[j]);
    }
   printf("\nPositive numbers are:");
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nNegative numbers are:");
    for(i=0;i<size;i++){
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
    }
