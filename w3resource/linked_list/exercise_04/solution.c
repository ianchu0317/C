#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);

int main()
{
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	//Create linked list
	struct node *head, *tail;
	head = create_list(n);

	//Print out the current list
	printf("\nData entered in the list are : \n");
	print_list(head);

	//Input the new data to store at beginning of the list
	struct node *tmp = head;
	head = (struct node *) malloc(sizeof(struct node));
	head->next = tmp;

	printf("Input the data to insert at the beginning of the list : ");
	scanf("%d", &(head->data));

	//Update list
	/*
	struct node *tmp = head;
	head = (struct node *) malloc(sizeof(struct node));
	head->data = new;
	head->next = tmp;*/

	//Print out the updated list
	printf("\nData after inserted in the list are : \n");
	print_list(head);

	return 0;
}


struct node *create_list(int n)
{
	struct node *head = (struct node *) malloc(sizeof(struct node));
	struct node *tmp, *tail;

	printf("Input data for node 1 : ");
	scanf("%d", &(head->data));
	__fpurge(stdin);

	head->next = NULL;
	tmp = head;

	for (int i = 2; i <= n; i++)
	{
		tail = (struct node *) malloc(sizeof(struct node));

		printf("Input data for node %d : ", i);
		scanf("%d", &(tail->data));
		__fpurge(stdin);

		tail->next = NULL;
		tmp->next = tail;
		tmp = tmp->next;
	}
//	printf("Testing : \n");//
	print_list(head);
	return head;
}


void print_list(struct node *head)
{
	struct node *tmp;
	tmp = head;

	while (tmp != NULL)
	{
		printf("Data = %d\n", (tmp->data));

		tmp = tmp->next;
	}
}
