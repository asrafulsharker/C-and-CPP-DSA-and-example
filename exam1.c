#include <stdio.h>
int main()
{
    int c, first, last, middle, n, search, array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);

    }

    //  printf("Enter value to find: ");
    // scanf("%d", &search);
    find_ODD(array,n);

    return 0;
}
int find_ODD(int arr[],int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            binary_search(arr,arr[i],num);
        }
    }

}

binary_search(int array[],int search,int n)
{


    int first = 0;
    int  last = n - 1;
    int  middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at index %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

}
