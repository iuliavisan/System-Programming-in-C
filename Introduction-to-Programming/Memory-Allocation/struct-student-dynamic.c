/*Dynamic Memory for a Single Structure

Problem Description:
Create a structure called "Student" with the following fields: name, roll number (ID), and marks. 
Dynamically allocate memory for one student, take input from the user, and display the stored data.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[10];
    int id;
    float mark;
};


int main(){
    struct Student *ptr;
    int no = 1;
    // printf("Number of students: ");
    // scanf("%d", &no");
    
    ptr = (struct Student*)malloc(no * sizeof(struct Student));
    if(ptr == NULL){
        printf("Error");
        return 1;
    }
    int i;
    
    for(i = 0; i < no; i++){
        printf("Name, id and mark of the student: ");
        scanf("%s %d %f", ptr[i].name, &ptr[i].id, &ptr[i].mark);
    }
    printf("The information of the student is: \n");
    
    for(i = 0; i < no; i++){
        printf("%s %d %.2f\n", ptr[i].name, ptr[i].id, ptr[i].mark);
    }
    
    free(ptr);
    ptr = NULL;
    
    
    return 0;
}