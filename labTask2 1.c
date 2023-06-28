#include<stdio.h>
int main()
{
int a1[100],a2[100],a3[200],a,b,i,n=0;
printf(" Array size -1: no1 = ");
scanf("%d",&a);
printf("Enter %d the array elements\n",a);
for(i=0;i<a;i++)
{
scanf("%d",&a1[i]);
}printf("Array Size-2: no2 = ");
scanf("%d",&b);
printf("Enter %d the array elements\n",b);
for(i=0;i<b;i++)
{
scanf("%d",&a2[i]);
}
for(i=0;i<a;i++)
{
a3[n]=a1[i];
n++;
}
for(i=0;i<b;i++)
{
a3[n]=a2[i];
n++;
}
printf("Merged Array: \n");
for(i=0;i<(a+b);i++)
{
printf("%d ",a3[i]);
}
return 0;
}
