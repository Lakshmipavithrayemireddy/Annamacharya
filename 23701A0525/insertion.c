#include<stdio.h>
void main()
{
	int i,n,a[50],j,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\n enter the unsorted elements:");
	for(i=0;i<=n-1;i++)
	{
		printf("\n enter the%dth element",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while (temp<=a[j]&&j>=1)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("elements of array after sorting:");
	for(i=0;i<=n-1;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
}
