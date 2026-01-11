/* Write a program that creates a pointer for a variable then changes the
value of the variable using the pointer and shows the result on the output.*/

#include<stdio.h>
void main()
{
int num = 7;
float fl = 67.2;
float *ptrfl = &fl;
char ch = 'A';
char *ptrch = &ch;
int *ptrnum = &ptrch;
printf("Address of int is %d \n", ptrnum);
printf("Address of float is %d \n", ptrfl);
printf("Address of char is %d \n", ptrch);
}
