#include <stdio.h>
#include <stdlib.h>

// Node struct
struct Node{
  int data;
  struct Node *previous;
  struct Node *next;
};

void display(struct Node *);
void freeNodes(struct Node *);
struct Node *createNode(int);
struct Node *push(struct Node*);

int main(){
  // User input data
  int number;
  printf("Input the number of nodes: ");
  scanf("%d", &number);

  struct Node *tail = createNode(number); // create nodes

  printf("Data entered in the list are: \n");
  display(tail);

  tail = push(tail);

  printf("After insertion the new list are: \n");
  display(tail);

  freeNodes(tail);
  return 0;
}

// Display current list
void display(struct Node *tail){
  int counter = 1;
  // Find head node
  struct Node *head;
  while (tail != NULL){
    head = tail->previous;
    tail = tail->previous;
  }
  // Display nodes
  while (head != NULL){
    printf("Node %d: %d\n", counter, head->data);
    counter += 1;
    head = head->next;
  }
}

// Function to create nodes
struct Node *createNode(int num){
  struct Node *head, *tail, *tmp;
  head = (struct Node *) malloc(sizeof(struct Node));

  printf("Input data for node 1: ");
  scanf("%d", &(head->data));
  head->previous = NULL;
  head->next = NULL;
  tmp = head;

  for (int i = 2; i <= num; i++){
    tail = (struct Node *) malloc(sizeof(struct Node));
    printf("Input data for node %d: ", i);
    scanf("%d", &(tail->data));
    tmp->next = tail;
    tail->previous = tmp;
    tail->next = NULL;
    tmp = tail;
  }
  return tail;
}

// Push a new node
struct Node *push(struct Node *tail){
  struct Node *tmp = tail;
  tail = (struct Node *) malloc(sizeof(struct Node));
  printf("Input data for node 1: ");
  scanf("%d", &(tail->data));
  tail->previous = tmp;
  tail->next = NULL;
  
  return tail;
}

// Free nodes
void freeNodes(struct Node *tail){
  struct Node *tmp;
  while (tail != NULL){
    tmp = tail->previous;
    free(tail);
    tail = tmp;
  }
}
