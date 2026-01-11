/*
Write a C program to create Array of size 3 by 3 and take values from the user as input. And display in
the Matrix form.
1 2 3
4 5 6
7 8 9

*/
#include<stdio.h>
void main()
{
	int arr[4][3];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element [%d][%d]:", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d	",arr[i][j]);
		}
		printf("\n");
	}
}
