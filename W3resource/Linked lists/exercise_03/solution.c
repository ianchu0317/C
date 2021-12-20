#include <stdio.h>
#include <stdlib.h>

// Node struct
struct node{
	int data;
	struct node *next;
};


//Functions
void free_list(struct node *); // Free the linked list, because it's using dynamic allocation 
struct node *create(int n); // Create the linked list and get store content 
void count(struct node *); // Count total allocated node


int main()
{
	// Get pointer for the head and tail of the Linked list
	struct node *head, *tail;

	// Get user input
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	// Create the list
	head, tail = create(n);


	// Count nodes in the list
	count(head);

	printf("%d\n", head->next->data);
	//Free the linked list memory
	free_list(head);
	return 0;
}


void free_list(struct node *head)
{
	struct node *tmp;
	tmp = head;

	while (head->next != NULL)
	{
		head = head->next;
		free(head);
	}
}

struct node *create(int n)
{
	struct node *head = (struct node *) malloc(sizeof(struct node));

	if (head == NULL)
	{
		printf("[!] Failed allocating HEAD node ");
		exit(1);
	}

	struct node *tmp, *tail;

	int count = 1;
	printf("Input data for node %d : ", count);
	scanf("%d", &(head->data));
	__fpurge(stdin);
	count++;

	tmp = head;
	tmp->next = NULL;

	for (int i = count; i<=n; i++)
	{
		tail = (struct node *) malloc(sizeof(struct node));

		if (tail == NULL)
		{
			printf("[!] Failed allocating node %d", i);
			exit(1);
		}

		printf("Input data for node %d : ", i);
		scanf("%d", &(tail->data));
		__fpurge(stdin);

		tmp->next = tail;
		tmp = tail;
		tmp->next = NULL;
	}

	return head, tail;
}


void count(struct node *tmp)
{
	int n = 1;

	printf("\n\nData entered in the list are : \n");

	while (tmp != NULL)
	{
		printf("Data = %d\n", tmp->data);
		tmp = tmp->next;
		n++;
	}

	printf("\n\n");
	printf("Total allocated nodes = %d", n);
}
