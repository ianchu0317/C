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

  struct Node *head = createNode(number); // create nodes

  printf("Data entered in the list are: \n");
  display(head);

  head = push(head);

  printf("After insertion the new list are: \n");
  display(head);

  freeNodes(head);
  return 0;
}

// Display current list
void display(struct Node *head){
  int counter = 1;
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
  return head;
}

// Push a new node
struct Node *push(struct Node *head){
  struct Node *tmp = head;
  head = (struct Node *) malloc(sizeof(struct Node));
  printf("Input data for node 1: ");
  scanf("%d", &(head->data));
  head->previous = NULL;
  head->next = tmp;

  return head;
}

// Free nodes
void freeNodes(struct Node *head){
  struct Node *tmp;
  while (head != NULL){
    tmp = head->next;
    free(head);
    head = tmp;
  }
}
