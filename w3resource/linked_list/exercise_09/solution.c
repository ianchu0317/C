#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
void delete_list(struct node *);
void free_list(struct node *);

int main()
{
	//Input number of nodes
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	//Create linked list
	struct node *head = create_list(n);

	//Print out the current list
	printf("\nData entered in the list are : \n");
	print_list(head);

	//Delete the last item in the list
	delete_list(head);

	//Print out the updated list
	printf("\nThe new list after deletion the last node are : \n");
	print_list(head);

	return 0;
}

//Create linked list by passing quantity
struct node *create_list(int n)
{
	//Allocate memory
	struct node *head = (struct node *) malloc(sizeof(struct node));
	struct node *tmp, *tail;

	//Store node data
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
		tmp = tail;
	}

	return head;
}

//Function to print out the linked list
void print_list(struct node *head)
{
	while (head != NULL)
	{
		printf("Data = %d\n", head->data);
		head = head->next;
	}
}

//Dalete the last item in the list
void delete_list(struct node *head)
{
	struct node *previous;

	while (head->next != NULL)
	{
		previous = head;
		head = head->next;
	}

	previous->next = NULL;
	free(head);
}

//Free the linked list
void free_list(struct node *head)
{
	struct node *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
