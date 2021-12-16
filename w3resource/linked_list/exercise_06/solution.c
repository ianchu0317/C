#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
void add_node(struct node *, int, int);
//void free_list(struct node *, struct node *);
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

	//Add new node
	int new_data;
	printf("\nInput data to insert in the middle of the list : ");
	scanf("%d", &new_data);
	__fpurge(stdin);

	int position;
	printf("Input the position to insert new node : ");
	scanf("%d", &position);
	__fpurge(stdin);

	add_node(head, position, new_data);

	//Print out updated node
	printf("\nThe new list are : \n");
	print_list(head);

//	struct node *tmp = head;
//	free_list(tmp, head);
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
void add_node(struct node *head, int position, int new_data)
{
	static int i = 1;
	struct node *tmp;

	while ( i + 1 < position)
	{
		i++;
		head = head->next;
	}

	tmp = (struct node *) malloc(sizeof(struct node));
	tmp->data = new_data;
	tmp->next = head->next;

	head->next = tmp;
	printf("\nInsertion completed successfully.");
}

//Free the linked list

/*void free_list(struct node *tmp, struct node *head)
{

	if (tmp->next == NULL)
        {
                free(head);
		return;
        }
	else if (head->next == NULL) {
		printf("\nData %d (freed)", head->data);
		free(head);
		head = tmp;
		free_list(tmp, head);
	}
	else {
		head = head->next;
		free_list(tmp, head);
	}
}*/

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
