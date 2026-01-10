/* Problem: Alpha Dict Character Classifier (If-Else & Switch)

Create a classifier program named “Alpha Dict”. 

Program Logic:
- The user will input a single character in the range of ‘A’ to ‘Z’ (Uppercase only).
- The program must determine if the character is a “Vowel” or a “Consonant”.

Constraints:
1. You must use an 'if-else' statement to validate whether the character is within 
   the correct range ('A' to 'Z').
2. If the character is outside the expected range, the program must provide proper 
   exception handling (e.g., display an error message).
3. You are only allowed to use a 'switch' statement to implement the logic for 
   identifying Vowels and Consonants.

Note: Input is restricted to capital letters only.
*/

#include <stdio.h>

int main(){
    
    char ch;
    
    printf("Introduce a capital letter: ");
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        switch(ch){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel", ch);
                break;
            
            default:
                printf("%c is a consonant", ch);
        }
    }
    else
        printf("Not a capital letter");
    
    return 0;
}
