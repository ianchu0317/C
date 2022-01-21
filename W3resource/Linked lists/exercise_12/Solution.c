#include <stdio.h>
#include <stdlib.h>

// Struct node
struct node{
  int data;
  struct node *previous;
  struct node *next;
};

struct node *create_nodes(int);
void display_nodes(struct node *);
void free_nodes(struct node *);

int main(){
  // User input node number
  int node_number;
  printf("Input number of nodes: ");
  scanf("%d", &node_number);
  __fpurge(stdin);

  struct node *tail = create_nodes(node_number);
  display_nodes(tail);
  free_nodes(tail);

  return 0;
}

struct node *create_nodes(int node_number){
  struct node *head, *tmp, *tail;

  // Create head node
  head = (struct node *) malloc(sizeof(struct node));
  printf("Input data for node %d: ", 1);
  scanf("%d", &(head->data));
  __fpurge(stdin);

  tmp = head;
  tmp->previous = NULL;
  tmp->next = NULL;

  // Create tail node and middle nodes
  for (int i = 2; i <= node_number; i++){
    tail = (struct node *) malloc(sizeof(struct node));
    printf("Input data for node %d: ", i);
    scanf("%d", &(tail->data));
    tmp->next = tail;
    tail->previous = tmp;
    tmp = tail;
    tmp->next = NULL;
  }

  // Return tail pointer address
  return tail;
}

void display_nodes(struct node *tail){
  int counter = 1;
  while (tail != NULL){
    printf("Data in node %d: %d\n", counter, tail->data);
    tail = tail->previous;
    counter += 1;
  }
}
// Free nodes
void free_nodes(struct node *tail){
  struct node *tmp = tail->previous;
  while (tmp != NULL){
    free(tail);
    tail = tmp;
    tmp = tmp->previous;
  }
  free(tail);
}
