#include<stdio.h>
#include<stdlib.h>
void create(int);
void reverse ();
struct node
{
	int data;
	struct node*next;
	};
	struct node*head;
    void main()
    {
    	int choice,item;
    	do
    {
    	printf("\n1.appendlist\n2.traverse\n3.exit\n4.enter your choice?");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case1:
    		printf("\n enter the item\n");
    		scanf("%d",&item);
    		create(item);
    		break;
    		case2:
    			travese();
    			break;
    			case3:
    				exit(0);
    				break;
    				printf("\n please enter valid choice\n");
		}
	}while(choice!=3);
	}
	void create(int item)
	{
		struct node*ptr=(struct node*)malloc(sizeof(struct node*));
		if(ptr==NULL)
		{
			printf("\n OVERFLOW\n");
		}
		else
		{
			ptr->data=item;
			ptr->next=head;
			head=ptr;
			printf("\n node inserted\n");
		}
	}
	void traverse()
	{
		struct node*ptr;
		ptr=head;
		if(ptr==NULL)
		{
			printf("emptylist");
		}
		else
		{
			printf("printing values.....\n");
			while(ptr!=NULL)
			{
				printf("\n %d",ptr->data);
				ptr=ptr->next;
			}
		}
	}
	
