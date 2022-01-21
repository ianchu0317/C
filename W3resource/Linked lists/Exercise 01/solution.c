#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;	
};


void add_node(int n);
void display_node(int n); 

struct node *head, *temp, *final;

int main()
{

	int n; 
	printf("Input the number of nodes : ");
	scanf("%d", &n);
	__fpurge(stdin);
	
	add_node(n);
	
	display_node(n);
	
	free(head);
	free(final);
}


void add_node(int n){
	head = (struct node *) malloc(sizeof(struct node));
	
	if (head == NULL) {
		printf("Can't allocate node\n");
		exit(1);
	}
	else{	
		printf("Input data for node 1 : ");
		scanf("%d", &(head->data));
		__fpurge(stdin);
		
		temp = head;
		temp->next = NULL;
		
		for (int i = 2; i<= n; i++)
		{
			final = (struct node *) malloc(sizeof(struct node));
			
			printf("Input data for node %d : ", i);
			scanf("%d", &(final->data));
			
			temp->next = final;
			temp = final;
			temp->next = NULL;
		}
	}
}

void display_node(int n){
	printf("\n\n");
	printf("**Display**\n");
	
	if (head == NULL) {
		printf("[!] List is empty !");
	}	
	else {
		printf("Node 1 data = %d\n", head->data);
		temp = head->next;
		
		int i=2; 
		
		while (temp!=NULL)
		{
			printf("Node %d data = %d\n", i, temp->data);
			temp = temp->next;
			i++;
		}
	}
}
