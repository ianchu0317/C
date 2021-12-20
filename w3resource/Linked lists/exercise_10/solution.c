#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};


struct node *create_list(int);
void print_list(struct node *);
int search(int, struct node *);


int main()
{
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);

	struct node *head = create_list(n);

	printf("\nData entered in the list are : \n");
	print_list(head);

	int number;
	printf("\nInput the element to be searched : ");
	scanf("%d", &number);
	__fpurge(stdin);

	number = search(number, head);

	if (number != 0) {
		printf("\nElement found at node %d", number);
	}
	else {
		printf("\nElement is not in the list.");
	}
	return 0;
}

//Create list
struct node *create_list(int n)
{
	struct node *head = (struct node *) malloc(sizeof(struct node));
	struct node *tmp, *tail;

	printf("Input data for node 1 : ");
	scanf("%d", &(head->data));

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

//Print list
void print_list(struct node *head)
{
	while (head != NULL)
	{
		printf("Data = %d\n", head->data);
		head = head->next;
	}
}


int search(int number, struct node *head)
{
	int counter = 1;

	while (head != NULL)
	{
		if (head->data == number) {
			return counter;
		}

		head = head->next;
		counter++;
	}

	return 0;
}
