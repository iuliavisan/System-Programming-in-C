/* Write a program that ROLLS a dice of LUDO randomly and display
the outcome on the output.*/
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void main()
{
int dice;
srand(time(NULL));
dice = rand()%6+ 1; // 1-6
printf("%d", dice);
}
