/* Write a program that takes 10 elements from user and
then take one element from user (you want to search), apply linear
search to find the elmenet.

You also need to write the frequency of the number 
*/

#include <stdio.h>

int count = 0;

int search(int arr[], int size, int x){
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            count++;
            // return i;
        }
        else
            return -1;
    }
}

int main(){
    int arr[10];
    for(int i = 0; i<10; i++){
        printf("%d element is: ", i+1);
        scanf("%d", &arr[i]);
    }

    int size;
    size = sizeof(arr)/sizeof(arr[0]);

    int element;
    printf("The element to look for: ");
    scanf("%d", &element);

    search(arr, size, element);
    printf("The element %d was found %d times.\n", element, count);

    return 0;
}