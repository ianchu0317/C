#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
void add_node(struct node *, int);

int main()
{
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	struct node *head = create_list(n);

	printf("\nData entered in the list are :\n");
	print_list(head);

	int new_data;
	printf("Input data to insert at the end of the list : ");
	scanf("%d", &new_data);
	__fpurge(stdin);

	add_node(head, new_data);

	printf("\nData, after inserted in the list are : \n");
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

	tmp = head;
	tmp->next = NULL;

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

void print_list(struct node *head)
{
	struct node *tmp = head;

	while (tmp != NULL)
	{
		printf("Data = %d\n", tmp->data);
		tmp = tmp->next;
	}
}

void add_node(struct node *head, int new_data)
{
	struct node *tmp;

	while (head->next != NULL)
	{
		head = head->next;
	}

	tmp = (struct node *) malloc(sizeof(struct node));
	tmp->data = new_data;
	tmp->next = NULL;

	head->next = tmp;
}
