/* Problem: Quadratic Equation Root Finder (If - Else If - Else)

Write a computer program to find the roots of a quadratic equation (ax² + bx + c = 0).

Input Requirements:
- The user enters the values for coefficients 'a', 'b', and 'c'.
- Validation:
    - If any value is exactly 0, print: “The value can’t be zero”.
    - If any value is less than 0, print: “Values must be greater than Zero”.

Calculation Logic:
1. Calculate the Discriminant (disc): disc = b² - 4ac.
2. Root Scenarios:
    - If disc > 0: The roots are real and unequal.
        root1 = (-b + sqrt(disc)) / (2 * a)
        root2 = (-b - sqrt(disc)) / (2 * a)
    - If disc < 0: The roots are imaginary.
        root1 = (-b + i*sqrt(|disc|)) / (2 * a)
        root2 = (-b - i*sqrt(|disc|)) / (2 * a)
    - If disc == 0: The roots are real and equal.
        root1 = root2 = -b / (2 * a)

Technical Notes:
- Use the `<math.h>` library and the `sqrtf` function for square root calculations.
- For imaginary roots, represent iota (i) as a constant where i = √-1.
*/
#include <stdio.h>
#include <math.h>
int main(){
    
    

float a;
float b; 
float c;
float root1;
float root2;
float disc;//delta
float i= -1;

printf("a = ");
scanf("%f", &a);
printf("b = ");
scanf("%f", &b);
printf("c = ");
scanf("%f", &c);

disc = sqrt(b * b - 4*a*c);

if(a > 0 && b > 0 && c > 0){
    
    if(disc > 0){
        root1 = (-b + disc)/ 2*a;
        root2 = (-b - disc)/ 2*a;
        printf("Root1 is %f and root2 is %f", root1, root2);
    }
    else if(disc < 0){

        root1=(-b+(i*disc)/2*a);  
        root2=(-b-(i*disc)/2*a); 
        printf("Root1 is %f and root2 is %f", root1, root2);
    }
    else
        root1=root2= -b / 2*a;
        printf("Root1 and root2 are: %f and %f", root1, root2);
}
else
    printf("All values must be greater than 0");
    
    
    
return 0;

}
