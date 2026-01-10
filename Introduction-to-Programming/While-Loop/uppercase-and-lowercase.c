/*Write a C Program to print uppercase and lowercase letters using Loops. 
Hint: You can use data type “char” and ASCII numbers in the loop to perform the task.*/
#include <stdio.h>

int main(){
    char uppercase = 'A';
    char lowercase = 'a';
    
    printf("Uppercase letters are: ");
    while(uppercase >= 'A' && uppercase <= 'Z'){
        printf("%c", uppercase);
        uppercase++;
    }
    printf("\nLowercase letters are: ");
    while(lowercase >= 'a' && lowercase <= 'z'){
        printf("%c", lowercase);
        lowercase++;
    }
    return 0;
}
