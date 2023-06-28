#include <stdio.h>

void RevPrint(int arr[], int n)
{

    printf("\nNow Print Reverse Order: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void mSort(int a[], int lowNum, int high)
{
	int mid;

	if (lowNum < high)
	{
		mid = (lowNum + high) / 2;

		mSort(a, lowNum, mid);
		mSort(a, mid + 1, high);

		Merge(a, lowNum, high, mid);
	}

	return;
}

void display(int *array, int size)
{
	for (int i = 1; i <= size; i++)

	{
		printf("%d ", array[i]);
	}
	printf("\n");
}


void Merge(int a[], int lowNum, int high, int mid)
{

	int i = lowNum, j = mid + 1, k = 0;
	int temp[high - lowNum + 1];

	while (i <= mid && j <= high)
	{
		if (a[i] > a[j])
			temp[k++] = a[i++];

		else
			temp[k++] = a[j++];
	}

	while (i <= mid)
	{
		temp[k++] = a[i++];
	}

	while (j <= high)
	{
		temp[k++] = a[j++];
	}

	for (i = lowNum; i <= high; i++)
	{

		a[i] = temp[i - lowNum];
	}

	return;
}





int main()
{
    int arr[] = {2, 0, 1, 1, 5, 3, 1, 7, 9};
    int s = 0;
    printf("My Id is : 201-15-3179 . My array is 201153179 \n");

    printf("Here Odd Indexed Elements: ");
    for (int i = 1; i < 9; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", arr[i]);
            s++;
        }
    }

    int nirob[s];
    int j = 1;
    for (int i = 0; i < s; i++)
    {
        nirob[i] = arr[j];
        j += 2;
    }

    RevPrint(nirob, s);

    mSort(nirob,0,s);
    display(nirob,s);

    int d = nirob[1] - nirob[s];

    printf("\nHere Difference: %d", d);
    printf("\nHere Times Table are: \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d * %d= %d\n", d, i, d * i);
    }

    return 0;
}
