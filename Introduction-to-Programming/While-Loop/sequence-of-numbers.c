/* Write a computer program that prints the following sequence up to n-terms, where ‘n’ is taken as an input from the user. 
0,2,6,14,30,62…
Sample Input: 4 */

#include <stdio.h>

int main(){
    int n;
    int difference = 2; //the first difference is 2
    int term = 0; //we start with 0

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    int i = 0;
    while(i < n){
        printf("%d ", term); //print here so it starts with 0
        term = term + difference; //new term
        difference = difference * 2; //updating the difference
        i++;
    }

    
    return 0;
}
