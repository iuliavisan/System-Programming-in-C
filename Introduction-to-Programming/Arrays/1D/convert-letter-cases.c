/*Write a C program that takes a string of size 30 character maximum from user without space, 
and then you need to convert the All Small Case Letters to Capital Case and All Capital Case Letters to Small Case. 
You are not allowed to use any of the built-in function, you can use ASCII table to do conversion. 
Sample Input: HelloWorld 
Sample Output: hELLOwORLD */

#include <stdio.h>

int main(){
  
  char string[30];
  int i;
  
  printf("Enter your string: ");
  scanf("%s", string);
  printf("Input: %s\n", string);
  
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[i] = string[i] + 32; //small Letters
        else if(string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - 32;
    }
    
    printf("Output: %s\n", string);
  
  return 0;
}
