//iterative c program to reverse a linked list
#include<stdio.h>
#include<stdlib.h>
/*link node*/
struct node
{
	int data;
	struct node*next;
};
/*function to reverse  the linked list*/
static void reverse (struct node**head_ref)
{
	struct node*prev=NULL;
	struct  node*current=*head_ref;
	struct node*next=NULL;
	while(current!=NULL)
	{
		//store next
		next=current->next;
		//reverse current nodes pointer
		current->next=prev;
		//move pointers one position ahead
		prev=current;
		current=next;
	}
	*head_ref=prev;
}
void push(struct node**head_ref,int new_data)
{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void printlist (struct node*head)
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node*head=NULL;
	push(&head,20);
	push(&head,4);
	push(&head,15);
	push(&head,85);
	printf("given linked list\n");
	printlist(head);
	reverse(&head);
	printf("\n reversed linked list\n");
	printlist(head);
	getchar();
	}
