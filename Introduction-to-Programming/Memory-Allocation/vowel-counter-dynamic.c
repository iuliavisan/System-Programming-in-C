/* Exercise: Vowel Count in a Dynamically Allocated String

Problem Description:
Write a C program that:
1. Asks the user for the maximum size of a string.
2. Dynamically allocates memory using malloc() or calloc() to store that string.
3. Accepts string input from the user.
4. Counts and prints the total number of vowels (a, e, i, o, u) in the string.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char *ptr;

    printf("Enter the maximum size of the string: ");
    scanf("%d", &n);

    // Allocate n+1 to account for the null terminator '\0'
    ptr = (char*)malloc((n + 1) * sizeof(char));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter your string: ");
    scanf("%s", ptr);

    int i = 0, count = 0;
    while (ptr[i] != '\0') {
        switch (ptr[i]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                count++;
                break;
            default:
                break;
        }
        i++;
    }

    printf("Total number of vowels in your string: %d\n", count);

    free(ptr);
    ptr = NULL;

    return 0;
}