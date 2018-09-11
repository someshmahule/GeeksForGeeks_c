#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};


void push(struct Node **head,int data){

	struct Node* new_node = (struct Node *) malloc(sizeof(struct Node));

	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
	return ;

}

void printList(struct Node *head)
{
	
	struct Node *a = head;
	
	while(a->next!= NULL)
	{
		printf("%d /n",a->data);
		a=a->next;
	}
	return ;
}

int main()
{
	struct Node *node_head = NULL;
	push(&node_head,1);
	push(&node_head,2);
	push(&node_head,3);
	push(&node_head,4);
	printList(node_head);

}
