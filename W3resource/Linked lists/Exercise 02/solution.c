#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};


struct node *head, *temp, *final;


void add_node(int n);
void display_node();
void reverse_node();

int main()
{
	printf("**** LINKED LIST ****\n\n");
	int n;
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);
	
	add_node(n);

	printf("\n\n");
	printf("Data entered in the list are : \n");
	display_node();
	
	printf("\n\n");
	printf("The list in reverse are : \n");
	reverse_node();
	
	free(head);
	free(final);
	
	return 0;
}


void add_node(int n)
{
	head = (struct node *) malloc(sizeof (struct node));
	
	if (head == NULL) {
		printf("[!] Failed allocating memory");
		exit(1);
	}
	
	else {
		printf("Enter Node 1 data : ");
		scanf("%d", &(head->data));
		temp = head; 
		temp->next = NULL;

		for (int i = 2; i <= n; i++) {
			
			final = (struct node *) malloc(sizeof (struct node));
			
			printf("Enter Node %d data : ", i);
			scanf("%d", &(final->data));
			
			temp->next = final;
			temp = final; 
			temp->next = NULL;
		}		
	}
}


void display_node()
{
	temp = head;
	int i=1;
	while (temp != NULL)
	{
		printf("Node %d data : %d\n", i, temp->data);
		temp = temp->next;
		i++;
	}			
}

void reverse_node()
{
	temp = head;

	struct node *done;
	
	int finished = 0;
	
	do 
	{
		if (temp->next == NULL)
		{
			printf("Node Data : %d\n", temp->data);
			done = temp;
			temp = head;
		}
		else if (temp->next == done) {
			printf("Node Data : %d\n", temp->data);
			
			if (done == head->next)
			{
				printf("Node Data : %d\n", head->data);
				break;
			}
			done = temp;
			temp = head;
		}
		
		temp = temp->next;
		
	} while (done != head->next); 
	
	printf("Node Data : %d", head->data);
}
