/* Write a program that create 5 nodes of link list, take data from user
and put inside then show that on the output screen.*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value; 
    struct node *next;
};

typedef struct node node;

int count = 0;

void printLinkedList(node *p){
    printf("The linked list is: \n");
    while(p!= NULL){
        printf("%d -> ", p->value);
        count++;
        p = p->next;
    }
    printf("NULL\n");
}

int main(){
    node *head = NULL;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *four = NULL;
    node *five = NULL;
    node *six = NULL;

    head = (node *)malloc(sizeof(node));
    one = (node *)malloc(sizeof(node));
    two = (node *)malloc(sizeof(node));
    three = (node *)malloc(sizeof(node));
    four = (node *)malloc(sizeof(node));
    five = (node *)malloc(sizeof(node));
    six = (node *)malloc(sizeof(node));

    printf("First node's value: ");
    scanf("%d", &one->value);

    printf("Second node's value: ");
    scanf("%d", &two->value);

    printf("Third node's value: ");
    scanf("%d", &three->value);

    printf("Fourth node's value: ");
    scanf("%d", &four->value);

    printf("Fifth node's value: ");
    scanf("%d", &five->value);

    printf("Sixth node's value: ");
    scanf("%d", &six->value);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next =NULL;

    head = one;

    printLinkedList(head);
    printf("The total number of nodes is: %d\n", count);


    return 0;
}