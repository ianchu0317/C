#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
void delete_node(struct node *, int);
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

	//Ask user input position
	int position;
	printf("\nInput the position of node to delete : ");
	scanf("%d", &position);
	__fpurge(stdin);

	//Delete node by position
	delete_node(head, position);

	//Print out updated node
	printf("\nThe new list are : \n");
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

//Delete node
void delete_node(struct node *head, int position)
{
	static int i = 1;
	struct node *previous;

	while (i < position)
	{
		previous = head;
		head = head->next;
		i++;
	}

	//Take out the selected node
	previous->next = head->next;

	printf("\nData of node %d which is being deleted is : %d\n", position, head->data);
	printf("Deletion completed ssuccessfully.\n");

	free(head);

	printf("Node %d : %p (free)\n", position, head);
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
