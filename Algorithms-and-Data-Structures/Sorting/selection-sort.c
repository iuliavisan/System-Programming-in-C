/* Write a program that takes 10 elements from user in an array ,
 sort in descending order using selection sort. */
 #include <stdio.h>

 void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 void selectionSort(int arr[], int size){
    for(int step = 0; step < size; step++){
        int min_idx = step;
        for(int i = step+1; i<size; i++){

            if(arr[i] > arr[min_idx]){
                min_idx = i;
            }

            swap(&arr[min_idx], &arr[step]);
        }
    }
 }

int main(){
    int n;
    printf("Number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i <n; i++){
        printf("%d element is: ", i+1);
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array in descending order: \n");
    for(int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}