#include <stdio.h>
#include <stdlib.h>

// Struct node
struct node{
  int data;
  struct node *previous;
  struct node *next;
};

struct node *create_nodes(int);

void print_node()

int main(){
  // User input node number
  int node_number;
  printf("Input number of nodes: ");
  scanf("%d", &node_number);
  __fpurge(stdin);

  struct node *tail = create_nodes(node_number);

  return 0;
}

struct node *create_nodes(int node_number){
  struct node *head, *tmp, *tail;

  head = (struct node *) malloc(sizeof(struct node));
  printf("Input data for node %d: ");
  scanf("%d", &(head->data));
  __fpurge(stdin);

  head = tmp;
  tmp->previous = NULL;
  tmp->next = NULL;

  for (int i = 2; i <= node_number; i++){
    tail = (struct node *) malloc(sizeof(struct node));
    printf("Input data for node %d: ", i);
    scanf("%d", &(tail->data));
    tmp->next = tail;
    tail->previous = tmp;
    tmp = tail;
    tmp->next = NULL;
  }

  return tail;
}

void free_nodes(struct node *head){
  struct node *tmp = head;
  while (tmp != NULL){
    
  }
}
