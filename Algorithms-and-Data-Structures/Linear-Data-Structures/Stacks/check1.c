#include <stdio.h>
#include <stdlib.h>
#define MAX 10
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
    if(s->top == MAX - 1){
        return 1;
    }
    else    
        return 0;
}

int isEmpty(st *s){
    if(s->top == -1){
        return 1;
    }
    else 
        return 0;
}

void pushElement(st *s, int newElement){
    if(isFull(s)){
        printf("Stack is full\n");
    }
    else{
        s->top++;
        s->items[s->top] = newElement;
        printf("%d was added!\n", s->items[s->top]);
        count++;
    }
}

void popElement(st *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("\n%d was removed!\n", s->items[s->top]);
        s->top--;
        count--;
    }
}

void peekElement(st *s){
    printf("The top element is: %d\n", s->items[s->top]);
}

void printStack(st *s){
    printf("Stack is: ");
    for(int i= 0; i < count; i++){
        printf("%d ", s->items[i]);
    }
}

int main(){
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);
    pushElement(s, 4);
    pushElement(s,1);
    pushElement(s,10);
    peekElement(s);
    printStack(s);
    popElement(s);
    pushElement(s, 14);
    printStack(s);



    return 0;
}