/* Unique Number Filtering (One-Dimensional Arrays)

Use a one-dimensional array to solve the following problem:

Input Logic:
- Read in 10 numbers from the user.
- Each number must be between 10 and 100, inclusive.

Validation and Storage:
- As each number is read, validate its range.
- Store the number in the array only if it is not a duplicate of a number already 
  stored during the current session.
- Ensure the program accounts for the “worst-case” scenario, where all 10 
  entered numbers are unique.

Output:
- After reading all values, display only the unique numbers that were 
  successfully entered and stored.

Bonus Point:
- Use the smallest possible array size to solve this problem efficiently.
*/

#include <stdio.h>

int main(){
    int arr[10];
    
    int i;
    for(i = 0; i < 10; i++){
        data:
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
        
        if(arr[i] >= 10 && arr[i] <= 100){
            for(int j = 0; j < i; j++){
                if(arr[j] == arr[i]){
                    printf("You entered an invalid number. Reenter: ");
                    goto data;
                }
            }
        }
        else{
            printf("You entered an invalid number. Reenter: ");
            goto data;
        }
    }
    
    
    
    return 0;
}
