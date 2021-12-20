#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *previous;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
void free_list(struct node *);

int main()
{
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	struct node *head = create_list(n);

	printf("\nData entered in the list are : \n");
	print_list(head);

	free_list(head);
	return 0;
}

//Create list
struct node *create_list(int n)
{
	struct node *head = (struct node *) malloc(sizeof(struct node));
	struct node *tmp, *tail;

	printf("Input data for node 1 : ");
	scanf("%d", &(head->data));

	head->previous = NULL;
	head->next = NULL;
	tmp = head;

	for (int i = 2; i <= n; i++)
	{
		tail = (struct node *) malloc(sizeof(struct node));

		printf("Input data for node %d : ", i);
		scanf("%d", &(tail->data));
		__fpurge(stdin);

		tail->next = NULL;
		tail->previous = tmp;
		tmp->next = tail;
		tmp = tail;
	}

	return head;
}

//Print list
void print_list(struct node *head)
{
	while (head != NULL)
	{
		printf("Data = %d\n", head->data);
		head = head->next;
	}
}


void free_list(struct node *head)
{
	struct node *tmp;
	while (head != NULL)
	{
		tmp = head;
		printf("\nData = %d (free)", head->data);
		head = head->next;
		free(tmp);
	}
}
