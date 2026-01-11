/* Write a program that create a pointer for a varible then change the
value of the variable using pointer and show on the output.*/
#include<stdio.h>
void main()
{
int num, *ptrnum;
printf("Enter Number :");
scanf("%d", &num);
ptrnum = &num;
printf("Value of num is : %d \n", num);
printf("Value of num is : %d \n", *ptrnum);
printf("Address of num is %d \n", &num);
printf("Address of num is %d \n", ptrnum);
*ptrnum = 20;

printf("Value of num is : %d \n", num);
printf("Value of num is : %d \n", *ptrnum);
}
