/*Write a C program to find an element from an array of 10 integers taken from user.
Each element will be checked. 
If the searched element exists multiple times, then its count will also be shown. 
Also show a message for the user to update the element if found using input.

Each element will be checked. 
If searched element exists multiple times, then its count will also be shown. 
Also show a message to user to update the element if found using input.*/

#include <stdio.h>

int main(){
    
    int arr[10];
    
    int i;
    int searched_el = 0;
    int flag = 0;
    char choice;
    int new_number;
    
    for(i = 0; i < 10; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("What element are you looking for? ");
    scanf("%d", &searched_el);
    
    for(i = 0; i < 10; i++){
        if(arr[i] == searched_el)
            flag++;
    }
        
    if(flag > 1){
        printf("%d appeared %d times!\n", searched_el, flag);
    }

    printf("Do you want to update the number? Y/N ");
    scanf(" %c", &choice);
    
    if(choice == 'Y'){
        printf("Enter the new number: ");
        scanf("%d", &new_number);
        
        int i;
        for(i = 0; i < 10; i ++){
            if(arr[i] == searched_el){ //checks each element from the array and when it sees
            // that the arr[i] is equal to the searched-el then it updates the element arr[i] with
            // the new number value
            arr[i] = new_number;
            // this is inside the loop
            }
        printf("%d", arr[i]);
        }
    }
    
    
 
    
    return 0;
}
