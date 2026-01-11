/* Problem: Student Structure Operations
Create a structure called "Student" with the following members: name, age, and total marks. 
Write a C program to input data for two students, display their information, 
and calculate the average of their total marks.
*/

#include <stdio.h>

struct Student{
    char name[20];
    int age;
    float mark;
};
void studentData(struct Student s[], int n);

int main(){
    struct Student s[2];
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", &s[i].name);
        printf("Enter the age of student %d: ", i+1);
        scanf("%d", &s[i].age);
        printf("Enter the mark of student %d: ", i+1);
        scanf("%f", &s[i].mark);
    }
    studentData(s, 2);
    
    return 0;
}

void studentData(struct Student s[], int n){
    int i;
    float sum = 0;
    
    printf("\n");
    
    for(i = 0; i < n; i++){
        printf("Student %d data: ", i+1);
        printf("%s, %.2d, %.2f\n", s[i].name, s[i].age, s[i].mark);
        sum = sum + s[i].mark;
    }
    printf("Average is: %.2f ", sum/n);
}