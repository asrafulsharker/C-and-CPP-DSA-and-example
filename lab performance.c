#include<stdio.h>

void sSort(float array[],int size,int aValue[],int aWeight[])
{

    float nValue;
    char nChar[100];
    int i,j,mNumber,nValue1;
    for (i = 0; i < size-1; i++)
    {
        mNumber=i;
        for (int j = i+1; j < size; j++)
        {
            if(array[mNumber]<array[j])
            {
                mNumber=j;
            }
        }
        if(mNumber != i)
        {
            nValue = array[mNumber];
            array[mNumber] = array[i];
            array[i] = nValue;

            nValue = aValue[mNumber];
            aValue[mNumber] = aValue[i];
            aValue[i] = nValue;

            nValue = aWeight[mNumber];
            aWeight[mNumber] = aWeight[i];
            aWeight[i] = nValue;
        }

    }

}
int main()
{
    int cNumber,size,i;
    printf("Enter the maximum capasity of the knapsack: ");
    scanf("%d",&cNumber);
    int remain_cNumber = cNumber,profit=0;
    printf("Enter the number of items: ");
    scanf("%d",&size);
    printf("Enter the values of the items: ");
    int aValue[size],aWeight[size],aItem[size];
    float array[size];
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&aValue[i]);
    }
    printf("Enter the weight of the items: ");

    for(i = 0 ; i < size  ; i++)
    {
        scanf("%d",&aWeight[i]);
    }

    for(i = 0 ; i < size ; i++)
    {
        array[i]=aValue[i]/aWeight[i];
    }

    for(i = 0 ; i < size  ; i++)
    {
        aItem[i] = aValue[i]/aWeight[i];
    }

    sSort(array,size,aValue,aWeight);

    for(i = 0 ; i < size ; i++)
    {
        if(remain_cNumber >= aWeight[i])
        {
            remain_cNumber = remain_cNumber - aWeight[i];
            profit = profit + aValue[i];
        }
        else if(remain_cNumber >= 0)
        {
            profit=profit+(remain_cNumber*array[i]);
            break;
        }
    }


    printf("Maximum profit for taking the maximum capacity of the knapsack:%d \n",profit);

    printf("the of the items (per unit):\n");
    for(i = 0 ; i < size  ; i++)
    {

        printf("%d ",aItem[i] );
    }


    return 0;

}
