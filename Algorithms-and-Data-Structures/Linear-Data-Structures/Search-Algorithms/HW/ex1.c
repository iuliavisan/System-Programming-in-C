
#include <stdio.h>

int count = 0;
int positions[20];
int j = 0;
int comparisons = 0;

void linearSearch(int arr[], int size, int x) {
    for(int i = 0; i < size; i++) {
        comparisons++;
        if(arr[i] == x) {
            positions[j] = i;
            j++;
            count++;
        }
    }
}

int main() {
    int element, n;

    printf("Input size n: ");
    scanf("%d", &n);
    
    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Input integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Input value x to search: ");
    scanf("%d", &element);

    linearSearch(arr, n, element);

    if(count == 0) {
        printf("Element not found\n");
    } else {
        printf("\nTotal occurrences: %d\n", count);
        printf("Positions: ");
        for(int i = 0; i < j; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }

    printf("Total comparisons: %d\n", comparisons);

    return 0;
}