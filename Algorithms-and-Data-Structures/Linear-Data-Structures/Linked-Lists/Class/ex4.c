/* Write a program that take 5 elements from user in to doubly link
list and then traverse the list in both direction.*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void traverseList1(struct node *p){
    printf("\nFirst direction traverse: ");
    while(p != NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    printf("NULL");
}

void traverseList2(struct node *p){
    printf("\nBackwards direction traverse: ");
    while(p != NULL){
        printf("%d ", p->data);
        p=p->prev;
    }
}

int main(){
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));

    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = four;
    three->prev = two;

    four ->next = five;
    four ->prev = three;

    five->next = NULL;
    five->prev = four;

    head = one;

    printf("1st node: ");
    scanf("%d", &one->data);
    printf("2nd node: ");
    scanf("%d", &two->data);
    printf("3rd node: ");
    scanf("%d", &three->data);
    printf("4th node: ");
    scanf("%d", &four->data);
    printf("5th node: ");
    scanf("%d", &five->data);

    traverseList1(head);
    traverseList2(five);

    return 0;
}
