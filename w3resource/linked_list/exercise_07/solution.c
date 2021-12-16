#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
struct node *delete_node(struct node *);
void free_list(struct node *);

int main()
{
	//Input nodes quantity
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	//Create nodes
	struct node *head = create_list(n);

	//Print out current nodes
	printf("\nData entered in the list are :\n");
	print_list(head);


	head = delete_node(head);


	//Print out updated node
	printf("\nData, after deletion of the first node : \n");
	print_list(head);

	printf("\nFree the lists : \n");
	free_list(head);
	return 0;
}

//Create Linked list
struct node *create_list(int n)
{
	struct node *head = (struct node *) malloc(sizeof(struct node));
	struct node *tmp, *tail;

	//Input data for node 1
	printf("Input data for node 1 : ");
	scanf("%d", &(head->data));
	__fpurge(stdin);

	tmp = head;
	tmp->next = NULL;

	//Input data for the rest of the nodes
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

	//Return linked list's head pointer, for later use
	return head;
}

//Print out the linked list
void print_list(struct node *head)
{
	struct node *tmp = head;

	while (tmp != NULL)
	{
		printf("Data = %d\n", tmp->data);
		tmp = tmp->next;
	}
}

//Add new node
struct node *delete_node(struct node *head)
{
	struct node *tmp = head;

	printf("\nData of node 1 which is being deleted is : %d\n", head->data);

	head = head->next;
	free(tmp);

	printf("Node 1 %p (free)\n", tmp);

	return head;
}


//Free the linked list
void free_list(struct node *head)
{
	struct node *tmp;

	while (head != NULL)
	{
		tmp = head;
		printf("\nData %d (free)", head->data);
		head = head->next;
		free(tmp);
	}
}
