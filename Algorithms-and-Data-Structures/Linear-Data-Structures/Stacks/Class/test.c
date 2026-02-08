#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int count = 0;

struct Stack {
    int top;
    int items[MAX];
    
};

typedef struct Stack st;

void createEmpyStack(st *s){
    s->top = -1;
}

int isFull(st *s){
    if(s->top == MAX - 1){
        printf("Stack is full");
        return 1;
    }
    else
        return 0;
}

int isEmpty(st *s){
    if(s->top == -1){
        printf("Stack is empty");
        return 1;
    }
    else    
        return 0;
}

void pushElement(st *s, int newElement){
    if(isFull(s)){
        printf("Stack is full");
    }
    else{
        s->top++; //just like a counter
        s->top[s->items] = newElement; // adds the number(new element) to s->top at the index of top because ex top=2; st[2] = new nr
    }
    count++;
}

void popElement(st *s){
    if(isEmpty(s)){
        printf("Stack is empty");
    }
    else{
        s->top--;
    }
    count--;
}

void printStack(st *s){
    printf("Stack is: ");

    for(int i =0; i < count; i++){
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main(){
    st *s= (st*)malloc(sizeof(st)); //upfront only the object, then the name of stuct inside only
    
    createEmpyStack(s);

    pushElement(s, 4);
    pushElement(s,1);
    pushElement(s,6);
    pushElement(s,1);
    pushElement(s, 3);

    printStack(s);

    popElement(s);
    popElement(s);
    popElement(s);

    printStack(s);

    return 0;

}