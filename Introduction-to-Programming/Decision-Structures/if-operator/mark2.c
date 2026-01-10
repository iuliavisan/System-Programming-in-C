/* Problem: Degree Program Suggestion (If - Else If - Else)

Write a computer program that takes Matric Marks, Intermediate Marks, and Entry Test Marks 
from a student to suggest degree programs for BS applicants.

Rejection Criteria:
- If the Entry Test marks are less than 50%, OR the Matric and Intermediate marks are 
  less than 40%, the student is immediately rejected with the message: "Not qualified".

Admission Criteria (based on aggregate score):
- If the aggregate is above 60%, the student is admitted to the BSCS program.
- If the aggregate is above 55%, the student is admitted to the BSSE program.
- If the aggregate is above 50%, the student is admitted to the BSAI program.
- If the aggregate is above 45%, the student is admitted to the BSBA program.
- Otherwise, the student is shown the message: "Not qualified".

Note: 
Aggregate Formula = (Matric * 20%) + (Intermediate * 20%) + (Entry Test * 60%)
*/

#include <stdio.h>

int main(){
    int matric_mark;
    int intermediate_mark;
    int entry_test_mark;
    
    printf("Your matric mark: ");
    scanf("%d", &matric_mark);
    printf("Your intermediate mark: ");
    scanf("%d", &intermediate_mark);
    printf("Your entry test mark: ");
    scanf("%d", &entry_test_mark);
    
    float aggregate = 0.2 * matric_mark + 0.2 * intermediate_mark + 0.6 * entry_test_mark;
    printf("%.2f", aggregate);


    
    if(entry_test_mark < 50 || ((matric_mark) < 40  && (intermediate_mark) < 40))
        printf("Not qualified");
        
    else if(aggregate > 0.6 * 100)
        printf("Admitted to BSCS program");
        
    else if(aggregate > 0.55 * 100)
        printf("Admitted to BSSE program");
    
    else if(aggregate > 0.5 * 100)
        printf("Admitted to BSAI program");
    
    else if(aggregate > 0.45 * 100)
        printf("Admitted to BSBA program");
    
    else
        printf("Not qualified");
    
}
