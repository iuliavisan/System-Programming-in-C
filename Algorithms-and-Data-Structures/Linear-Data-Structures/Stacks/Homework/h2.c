/*Reverse a String Using Stack
2.Write a C program that uses a stack to reverse a string entered by the user. 
Implement the stack using an array and perform all stack operations (push and pop) using functions. 
Display the original string and the reversed string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int count = 0;

struct Stack{
    int top;
    char items[MAX];
};

typedef struct Stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

int isFull(st *s){
    if(s->top == MAX-1){
        printf("\nStack is full\n");
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(st *s){
    if(s->top == -1){
        printf("\nStack is empty\n");
        return 1;
    }
    else    
        return 0;
}

void pushElemement(st *s, char newElement){
    if(isFull(s)){
        printf("\nStack is full\n");
    }
    else{
        s->top++;
        s->items[s->top] = newElement;
        printf("\nNew element pushed: %c\n", s->items[s->top]);
    }
    count++;
}

void popElement(st *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("\nElement popped: %c\n", s->items[s->top]);
        s->top--;
    }
    count--;
}

void displayStruct(st *s){
    printf("\nStruct is: ");
    for(int i = 0; i < count; i++){
        printf("%c ", s->items[i]);
    }
}

void displayReversedStruct(st *s){
    printf("\nReversed struct is: ");
    for(int i = count-1; i >= 0; i--){
        printf("%c ", s->items[i]);
    }
    printf("\n");
}

int main(){
    st *s = (st *)malloc(sizeof(st));

    char input[MAX];
    createEmptyStack(s);

    printf("Enter your string: ");
    scanf("%s", input);


    int length = strlen(input);
    for(int i = 0; i < length; i++){
        pushElemement(s, input[i]);
    }   
        displayStruct(s);
        displayReversedStruct(s);  
        popElement(s);
        popElement(s);
        
        displayStruct(s);
        displayReversedStruct(s);
}