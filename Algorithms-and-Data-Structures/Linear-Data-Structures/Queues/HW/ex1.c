/*Queue Operations Using Array
Write a C program to implement a queue using an array. The program should support the following operations using separate functions:

enqueue() to insert an element into the queue

dequeue() to remove an element from the queue

peek() to display the front element of the queue

display() to show all elements of the queue
Handle queue overflow and queue underflow conditions.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

struct Queue{
    int front;
    int rear;
    int items[MAX];
};

typedef struct Queue qu;

void createEmptyQueue(qu *q){
    q->front = -1;
    q->rear = -1;
}

int isFull(qu *q){
    if(q->rear == MAX - 1){
        return 1;
    }
    return 0;
}

int isEmpty(qu *q){
    if(q->front == -1){
        return 1;
    }
    return 0;
}

void enQueue(qu *q, int newElement){
    if(isFull(q)){
        printf("\nQueue is full!\n");
    }
    else{
        if(q->front == -1){
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = newElement;
        printf("\n%d element was added to the queue!\n", newElement);
    }
}

void deQueue(qu *q){
    if(isEmpty(q)){
        printf("\nQueue is empty!\n");
    }
    else{
        printf("\n%d was removed from the queue!\n", q->items[q->front]);
        q->front++;
        if(q->front > q->rear){
            q->front = -1;
            q->rear = -1;
        }
    }
}

void peekQueue(qu *q){
    if(isEmpty(q)){
        printf("Queue is empty!\n");
    }
    else{
    printf("\nThe first element in the queue is: %d", q->items[q->front]);
    }
}

void displayQueue(qu *q){
    printf("\nThe queue is: ");
    if(isEmpty(q)){
        printf("\nThe queue is empty!");
    }
    else{
        for(int i = q->front; i <= q->rear; i++){
        printf("%d ", q->items[i]);
        }
    }
}

int main(){
    qu *q= (qu *)malloc(sizeof(qu));

    createEmptyQueue(q);

    enQueue(q, 0);
    enQueue(q, 2);
    enQueue(q, 14);
    enQueue(q, 15);

    displayQueue(q);
    peekQueue(q);

    deQueue(q);
    deQueue(q);

    peekQueue(q);
    displayQueue(q);

    deQueue(q);
    deQueue(q);

    displayQueue(q);


    return 0;
}