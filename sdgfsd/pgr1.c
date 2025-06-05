#include<stdio.h>
void selection_sort(int a[],int n);
void main()
{
int n,a[100],i;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
selection_sort(a,n);
printf("sorted list");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void selection_sort(int a[],int n)
{
int i,j,small,temp;
for (i=0;i<n-1;i++)
{
small=i;
for(j=i+1;j<n;j++)
if (a[j]<a[small])
small=j;
temp=a[small];
a[small]=a[i];
a[i]=temp;
}
}


















	
