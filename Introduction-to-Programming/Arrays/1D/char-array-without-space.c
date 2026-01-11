/*Vowel Removal (Character Arrays / Strings)

Write a C program that accepts a single string input from the user (without spaces).

Program Logic:
- The program should process the input string and remove all vowel characters (a, e, i, o, u).
- The removal should be case-insensitive (handle both uppercase and lowercase vowels).

Sample Input: 
HelloWorld 

Output: 
HllWrld
*/

#include <stdio.h>

int main(){
    
    char string[20];
    char bstring[20];
    
    printf("Enter your string: ");
    scanf("%s", string);
    printf("Input: %s\n", string);
    
    int i;
    int j = 0;
    
    for(i = 0; string[i] != '\0'; i++){
        switch(string[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            break;

            default:
            bstring[j] = string[i];
            j++;
            break;
        }
            bstring[j] = '\0';
    }
    printf("Output: %s\n", bstring);
    

    
    
    return 0;
}
