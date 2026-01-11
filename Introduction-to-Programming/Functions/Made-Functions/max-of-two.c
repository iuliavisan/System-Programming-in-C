
#include <stdio.h>

int max_two(int n1, int n2);

void main(){
    int a,b;
    
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    printf("The max number is: %d", max_two(a,b));
}

int max_two(int n1, int n2){
    if(n1>n2)
        return n1;
    else
        return n2;
}
