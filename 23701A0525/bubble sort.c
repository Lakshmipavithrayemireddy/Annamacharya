/*program to sort n elements using bubble sort*/
#include<stdio.h>
void main()
{
	int i,n,a[50],j,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\n enter the unsorted elements");
	for(i=0;i<=n-1;i++)
	{
		printf("\n enter the %dth element",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1]);
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n after sorting the elements are:");
	for(i=0;i<n-1;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}

