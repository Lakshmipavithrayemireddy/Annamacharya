/*program  for linear search*/
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i,key=30,flag=0;
	for (i=0;i<5;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("key is found");
	else
	{
		printf("key is not found");
	}
}
