/*Question 2: Advanced Binary Search
Problem:
Write a C program that uses Binary Search to find the first and last occurrence of a given number in a sorted array.
Requirements:
Input size n
Input n sorted integers
Input a value x
Using Binary Search:
Find and print the first index of x
Find and print the last index of x
If not found, print "Element not found"
Extra Challenge:
Calculate and print the total number of iterations used in both searches.*/
#include <stdio.h>

int count = 0;

int binarySearch(int arr[], int x, int low, int high){
    while(low <= high){
        int mid= low+(high-low)/2;
        count++;

        if(x == arr[mid])
            return mid;
        
        if(x > arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main(){
    int array[] = {1,2,3,4,5,6,6};
    int n = sizeof(array) / sizeof(array[0]);
    
    int x = 6;
    int result = binarySearch(array, x, 0, n - 1);
    
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d and it iterated %d times.\n", result, count);


    return 0;
}