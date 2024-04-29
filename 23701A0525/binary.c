/*program   for binary  search*/
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i, mid ,key=50,flag=0,low=0,high=4;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key=a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		if(flag==1)
		{
			printf("key is found");
		}
		else 
		{
			("key is not found");	
		}
	}
}
