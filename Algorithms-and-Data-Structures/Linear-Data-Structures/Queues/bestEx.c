#include <stdio.h>
#include <stdlib.h>

#define MAX 5
// int count = 0;

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
        printf("\n%d was added to the queue!\n", newElement);
        // count++;
    }
}

void deQueue(qu *q){
    if(isEmpty(q)){
        printf("\nQueue is empty!\n");
    }
    else{
        if(q->front > q->rear){
            q->front, q->rear = -1;
        }
        printf("\n%d was deleted from the queue!\n", q->items[q->front]);
        q->front++;
        // count--;
    }
}

void displayQueue(qu *q){
    printf("\nQueue is: ");
    for(int i = q->front; i <= q->rear; i++){
        printf("%d ", q->items[i]);
    }
}

int main(){
    qu *q= (qu *)malloc(sizeof(qu));

    createEmptyQueue(q);
    enQueue(q, 1);
    enQueue(q, 10);
    enQueue(q, 4);
    enQueue(q, 6);
    enQueue(q,3);
    enQueue(q,1);
    enQueue(q,2);

    displayQueue(q);

    deQueue(q);
    deQueue(q);

    displayQueue(q);
    return 0;
}