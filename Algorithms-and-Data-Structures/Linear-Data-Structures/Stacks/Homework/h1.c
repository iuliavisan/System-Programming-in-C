/*Stack Operations Using Array
1.Write a C program to implement a stack using an array of 20 elements. The program should support the following operations using separate functions:

push() to insert an element into the stack

pop() to remove an element from the stack

peek() to display the top element of the stack

display() to show all elements of the stack
Handle stack overflow and stack underflow conditions.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int count = 0;

struct Stack{
    int top;
    int items[MAX];
};

typedef struct Stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

int isFull(st *s){
    if(s->top == MAX-1){
        printf("Stack is full\n");
        return 1;
    }
    else
        return 0;
}

int isEmpty(st *s){
    if(s->top == -1){
        printf("Stack is empty\n");
        return 1;
    }
    return 0;
}

void pushElement(st *s, int newElement){
    if(isFull(s)){
        printf("Stack is full\n");
    }
    else{
        s->top++;
        s->items[s->top] = newElement;//?
    }
    count++;
}

void popElement(st *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("\n%d element popped!\n", s->items[s->top]);
        s->top--;
    }
    count--;
}

void peekElement(st *s){
    printf("The last added element is: %d\n", s->items[s->top]);
}

void displayStack(st *s){
    printf("Stack is: ");
    for(int i =0; i < count; i++){
        printf("%d ", s->items[i]);
    }
    printf("\n");
    
}

int main(){
    st *s = (st *)malloc(sizeof(s));

    createEmptyStack(s);

    pushElement(s, 2);
    pushElement(s,3);
    pushElement(s, 5);

    displayStack(s);

    popElement(s);

    peekElement(s);

    popElement(s);

    displayStack(s);

    return 0;
}