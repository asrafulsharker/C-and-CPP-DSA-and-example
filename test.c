#include <stdio.h>
int main()
{
int a[100], n, i, j, min, exchange;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d Numbers: ", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
min=i;
for(j = i + 1; j < n; j++)
{
if(a[min] > a[j])
min=j;
}
if(min != i)
{
exchange=a[i];
a[i]=a[min];
a[min]= exchange;
}
}
printf("Sorted Array:");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
return 0;
}
