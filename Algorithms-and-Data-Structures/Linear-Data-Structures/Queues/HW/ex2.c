/*Circular Queue Implementation
Write a C program to implement a circular queue using an array. 
Create functions for enqueue and dequeue operations and display the queue elements after each operation. 
Properly handle full and empty conditions of the circular queue.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 3
int count = 0;

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
        if(q->rear == MAX-1){ //if we reach the MAX, then the rear must go to the -1 index so that it can start puttin elements from index 0
            q->rear = -1;
            }else{
                q->rear++; //if it's not reaching yet the MAX, then we can just go on with the rear + until we reach it.
            }
        count++;
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
        if(q->front == q->rear){ //making it empty
            q->front = -1; 
            q->rear = -1; 
        }
        else if(q->front == MAX - 1){
            q->front = 0; //starts once again because it's not linear anymore, it's circular
        }else{
            q->front++;
        }
        count--;
       
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
        for(int i = q->front; i < q->rear; i++){
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