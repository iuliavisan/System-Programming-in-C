#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node node;

void printLinkedList(node *p){
    printf("Linked list: \n");

    while(p != NULL){
        printf("%d -> ", p->value);
        p = p->next;
    }
    printf("NULL\n");
}

int main(){

    node *head = NULL;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    head = (node *) malloc (sizeof(node));
    one = (node *) malloc(sizeof(node));
    two = (node *) malloc(sizeof(node));
    three = (node*)malloc(sizeof(node));

    printf("First node's value: ");
    scanf("%d", &one->value);

    two->value = 2;
    three->value = 10;
    
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    printLinkedList(head);



    return 0;
}