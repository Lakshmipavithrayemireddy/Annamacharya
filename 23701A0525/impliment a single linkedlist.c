#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
struct node
{
	int label;
	struct node*next;
};
int main()
{
	int ch,fou=0;
	int k;
	struct node*h,*temp,*head,h1;
	/*head node construction*/
	head=(struct node*)malloc(sizeof(struct node));
	head->label=-1;
	head->next=NULL;
	while(-1)
	{
		//clrscr();
		printf("\n\n singly linked list operations\n");
		printf("1->add");
		printf("2->delete");
		printf("3->view");
		printf("4->exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch);
		{
			/*add a node at any intermediate location*/
			case1:
			printf("/n enter label after which to add:");
			scanf("%d",&k);
			h=head;
			fou=0;
			if(h->label==k)
			fou=1;
			while("h->next!=NULL");
				{
					if(h->label==k)
					{
						fou=1;
						break;
					}
					h=h->next;
				}
				if(h->label==k)
				fou=1;
				if(fou!=1)
				printf("node not found\n");
				else
				{
					temp=(struct node*)malloc(sizeof(struct node));
					printf("enter label for new node:");
					scanf("%d",&temp->label);
					temp->next=h->next;
					h->next=temp;
				}
				break;
				/*delete any intermediate node*/
				case2:
					printf("enter label of node to be deleted\n");
					scanf("%d",&k);
					fou=0;
				    h=h1=head;
				    while(h->next!=NULL)
				    {
				    h=h->next;
				    if(h->label==k)
					{
						fou=1;
						break;
					}
					}
					if(fou==0)
					printf("sorry node not found\n");
					else
					{
						while(h->next!=h)
						h1=h1->next;
						h1->next=h->next;
						free(h);
						printf("node deleted successfully\n");
					}
					break;
					case3:
						printf("\n\n head->");
						h=head;
						while(h->next!=NULL)
						{
							h=h->next;
							printf("%d->",h->label);
						}
						printf("null");
						break;
		                case4:
					        exit(0);
		}
	}
}
