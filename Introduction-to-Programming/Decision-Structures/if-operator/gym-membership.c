/* Problem: Seminar Fee Calculator (Nested If-Else)

Write a computer program that determines the appropriate seminar fee based on a 
person’s membership status and age.

Input Requirements:
- A `char` variable named `membership` (accepts 'M' for member or 'N' for non-member, 
  in either uppercase or lowercase).
- An `int` variable named `age`.

Fee Schedule:
- $10: Club member (M) less than 65 years old.
- $5:  Club member (M) at least 65 years old.
- $20: Non-member (N).

Constraints:
- Use `if-else` and `nested if-else` statements to solve the problem.
- Ensure the program handles both uppercase and lowercase input for the membership status.
*/

#include <stdio.h>

int main(){
    
    char membership;
    int age;
    
    printf("Are you a member(M) or a non-member(N)?: \n");
    scanf("%c", &membership);
    
    if(membership == 'M' || membership == 'N'){
        
    
        if(membership == 'M'){
            printf("How old are you?\n");
            scanf("%d", &age);
            
            if(age < 65)
                printf("Fee is 10$");
            
            else
                printf("Fee is 5$");
            
        }
        else if(membership == 'N')
            printf("Fee is 20$");
        
    }
    
    
    return 0;
}
