/* Exercise 3: Dynamic Memory Allocation for Even Numbers

Problem Description:
Write a C program containing a function: int* findEven(int arr[], int n, int *count).
The function must:
1. Find all even numbers in an input array.
2. Dynamically allocate memory to store only these even numbers.
3. Return a pointer to this newly allocated memory.

The main function should:
1. Input 'n' integers into an initial array.
2. Call findEven() and receive the pointer.
3. Print all even numbers using the returned pointer.
4. Free the allocated memory to prevent memory leaks.
*/

#include <stdio.h>
#include <stdlib.h>

int* findEven(int arr[], int n, int *count) {
    int i;
    int evenCount = 0;
    
    // First pass: Count even numbers to determine allocation size
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) evenCount++;
    }
    
    *count = evenCount;
    if(evenCount == 0) return NULL;

    // Dynamically allocate memory for the even numbers
    int *evenArr = (int*)malloc(evenCount * sizeof(int));
    
    // Second pass: Store even numbers in the new memory
    int j = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenArr[j++] = arr[i];
        }
    }
    
    return evenArr;
}

int main() {
    int n, count, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int *result = findEven(arr, n, &count);
    
    if(result != NULL) {
        printf("The even numbers are: ");
        for(i = 0; i < count; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result); // Critical: Freeing allocated memory
    } else {
        printf("No even numbers found.\n");
    }
    
    return 0;
}