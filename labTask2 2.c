#include<stdio.h>
int main()
{
int a,b;
printf("Input Test Case = ");
scanf("%d",&a);
printf("How many Numbers you want to insert?\n");
int n,i;scanf("%d",&n);
int arr[n];
printf("Enter %d the array elements\n",n);
for(i=0; i<n; i++){
scanf("%d",&arr[i]);
}
for(b=1; b<=a; b++)
{
int lower=0,higher=n-1,middle;
printf("Case:%d\n",b);
printf("Enter Data  to search elements\n");
int check;
scanf("%d",&check);
while(lower<=higher)
{
middle=(lower+higher)/2;
if(arr[middle]==check)
{
printf("%d is found at Index %d\n",check,middle);
break;
}
else
if(arr[middle]>check)
{
higher=middle-1;
}else
{
lower=middle+1;
}
}
if(lower>higher)
{
printf("%d is not found in the Array\n",check);
}}
return 0;
}
