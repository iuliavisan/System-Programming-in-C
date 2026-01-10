
/* Write a program that takes a character from the user and 
finds whether it is a vowel OR consonant.*/

#include <stdio.h>

int main(){
    
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
        printf("Vowel");
        break;
        
        default:
        printf("Consonant");
    }
}
