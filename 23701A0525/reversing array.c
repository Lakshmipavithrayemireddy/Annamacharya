/*program to reverse an array*/
#include<stdio.h>
main()
{
	int  a[5],i,n;
	printf("enter the array size");
	scanf("%d",&n);
	printf("array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("after reversing elements:");
	}	
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
