/*program to sort n elements using selection sort*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],temp,min,j,loc;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("\n enter the unsorted elements");
	for(i=0;i<=n-1;i++)
	{
		printf("\n enter the %dth  element :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		min=i;
		loc=i;
		for( j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n after sorting the elements are:");
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
