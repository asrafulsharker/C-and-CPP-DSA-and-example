#include<stdio.h>
int main()
{
int arr[100],freq[100],n,i,j,k,count=1;
printf("Ënter a number:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
freq[i] = -1;
    }
for(i=0; i<n; i++)
    {
count = 1;
    for(j=i+1; j<n; j++)
{
if(arr[i]==arr[j]){count++;
freq[j] = 0;
}}
if(freq[i] != 0)
{freq[i] = count;
}}
for(i=0; i<n; i++)
{if(freq[i] != 0){
printf("%d  %d \n", arr[i], freq[i]);
}}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
for(k=j;k<n-1;k++)
{
arr[k]=arr[k+1];
}
n--;
j--;
}}}
printf("After Delete Duplicate\n\nFinal Array : ");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}}
