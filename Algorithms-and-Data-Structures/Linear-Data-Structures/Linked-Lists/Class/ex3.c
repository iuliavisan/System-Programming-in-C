// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  float num;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("Value : %d Num : %f ", p->value,p->num);
    
    p = p->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  struct node *four = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  four = malloc(sizeof(struct node));

  // Assign value values
  printf("Enter First Node Value :");
  scanf("%d", &one->value);
  two->value = 2;
  three->value = 3;
  four->value = 45;
  
  
  one->num = 1.5;
  two->num = 2.5;
  three->num = 3.5;
  four->num = 45.2;
  
  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  // printing node-value
  head = one;
  printLinkedlist(head);
}