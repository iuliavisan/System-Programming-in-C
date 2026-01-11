#include <stdio.h>
#include <string.h>

void cal_mul();
void cal_add();
void cal_sub();
void cal_div();
void disp();

void main(){
    int n1,n2;
    char choice[10];
    
    printf("n1 = ");
    scanf("%d", &n1);
    printf("n2 = ");
    scanf("%d", &n2);
    
    printf("What operation do you want to perform?\n");
    printf("mul/add/sub/division\n");
    scanf("%s", choice);


    if(strcmp (choice, "mul") == 0){
        cal_mul(n1, n2);
    }
    else if(strcmp(choice, "add") == 0){
        cal_add(n1, n2);
    }
    else if(strcmp(choice, "sub") == 0){
        cal_sub(n1, n2);
    }
    else if(strcmp(choice, "division") == 0){
        cal_div(n1, n2);
    }
}
    


void cal_mul(int a,int b){
    int mul;
    mul = a * b;
    disp(mul);
}

void cal_add(int a, int b){
    int add;
    add = a + b;
    disp(add);
}

void cal_sub(int a, int b){
    int sub;
    sub = a - b;
    disp(sub);
}

void cal_div(int a, int b){ 
    int division;
    division = a/b;
    disp(division);
}

void disp(int x){
    printf("Result is: %d\n", x);
}

void cal_mul(int a,int b){
    int mul;
    mul = a * b;
    disp(mul);
}

void cal_add(int a, int b){
    int add;
    add = a + b;
    disp(add);
}

void cal_sub(int a, int b){
    int sub;
    sub = a - b;
    disp(sub);
}

void cal_div(int a, int b){ 
    int division;
    division = a/b;
    disp(division);
}

void disp(int x){
    printf("Result is: %d\n", x);
}
