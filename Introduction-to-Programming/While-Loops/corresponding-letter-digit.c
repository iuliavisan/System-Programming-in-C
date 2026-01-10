/*Write a program that reads the letter codes A to Z and prints the corresponding telephone digit. 
This program uses a sentinel-controlled while loop. To stop the program, the user is prompted for 
the sentinel, which is #. Your program converts uppercase letters to their corresponding // 
telephone digits*/

#include <stdio.h>

int main(){
    char letter;
    
    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    while(letter != '#'){
        switch(letter){
            case 'A':
            case 'B':
            case 'C':
                printf("2\n");
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("3\n");
                break;
            case 'G':
            case 'H':
            case 'I':
                printf("4\n");
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("5\n");
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("6\n");
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                printf("7\n");
                break;
            case 'T':
            case 'U':
            case 'V':
                printf("8\n");
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                printf("9\n");
                break;
            default:
                printf("%c\n", letter);
        }
        printf("Enter a letter: ");
        scanf(" %c", &letter);
    }
    
    
    return 0;
}
