/* Exercise: Dynamic Array Allocation and Resizing

Problem Description:
Write a C program that:
1. Dynamically allocates memory for an initial array of N integers.
2. Allows the user to input all values.
3. Asks the user if they wish to increase the array size.
4. If "yes", use realloc() to expand the array by M additional elements and take new inputs.
5. Prints all elements of the updated array.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    char choice;
    int *ptrn;

    printf("Initial size of the array: ");
    scanf("%d", &n);

    ptrn = (int*)malloc(n * sizeof(int));

    if (ptrn == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &ptrn[i]);
    }

input_choice: 
    printf("Do you want to increase the size of the array? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {
        int additional_elements;
        printf("How many more elements do you want to add? ");
        scanf("%d", &additional_elements);
        
        int new_total_size = n + additional_elements;
        ptrn = realloc(ptrn, new_total_size * sizeof(int));
        
        if (ptrn == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }
        
        for (i = n; i < new_total_size; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &ptrn[i]);
        }
        
        printf("Updated array: ");
        for (i = 0; i < new_total_size; i++) {
            printf("%d ", ptrn[i]);
        }
        printf("\n");
    } 
    else if (choice == 'N' || choice == 'n') {
        printf("Final array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", ptrn[i]);
        }
        printf("\n");
    } 
    else {
        printf("Invalid input! Only Y/N is allowed.\n");
        goto input_choice;
    }

    free(ptrn);
    ptrn = NULL;

    return 0;
}