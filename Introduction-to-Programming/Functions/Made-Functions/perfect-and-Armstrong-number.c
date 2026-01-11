#include <stdio.h>
#include <math.h>

int Armstrong_num(int num);
int perfect_num(int num);

int main(){
    int x;
    printf("Number = ");
    scanf("%d", &x);
    Armstrong_num(x);
    
    
    return 0;
}

int Armstrong_num(int num){
    int digit, i;
    int sum=0;
    int arr[i];
    int len = 0;
    int original = num;

    for(i = 0; i < num; i++){
    digit = num % 10;
    num = num / 10;
    // printf("Digit: %d\n", digit);
    // printf("Updated number: %d\n", num);
    printf("Digits: %d \n", digit);
    arr[i] = arr[i] + digit;
    }
    len = i;
    printf("Array is: ");
    for(i = 0; i < digit; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("No of digits: %d\n", i);
    // printf("Sum is: %d\n", sum);
    int j;
    for(j = 0; j<len; j++){
        sum = sum + pow(arr[j], len);
    }
    printf("Sum is: %d\n", sum);
    
    if(sum == original){
        printf("%d is an Armstrong number\n", original);
    }
    else    
        printf("%d is not an Armstrong number\n", original);
}

