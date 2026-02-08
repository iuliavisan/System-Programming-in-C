/* Write a program that create 5 nodes of link list, take data from user
and put inside then show that on the output screen.*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void printLinkedList(struct node *p){
    while(p != NULL){
        printf("%d ", p->value);
        p = p->next;
    }
}

int main(){
    struct node *head; //not in the 5
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *five = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));

    printf("Node one: ");
    scanf("%d", &one->value);
    printf("Node two: ");
    scanf("%d", &two->value);
    printf("Node three: ");
    scanf("%d", &three->value);
    printf("Node four: ");
    scanf("%d", &four->value);
    printf("Node five: ");
    scanf("%d", &five->value);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    head = one;
    printLinkedList(head);
}
