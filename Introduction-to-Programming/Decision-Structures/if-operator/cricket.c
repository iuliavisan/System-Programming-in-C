/*Suppose there is a cricket match between Pakistan and India. 

India played first and gave a target of 300 runs to Pakistan. 

Now write a program that obtains the cricket match score and  the remaining wickets from user. 

If the user is greater than 300 outputs, then a message will indicate “Pakistan win the match by X wickets” while 
X are remaining wickets. Otherwise it will show a message with how many remaining runs are required to win with X wickets in hand. 

Use single if-else statements. If the score is 300 with 0 wickets in hand then display "match is draw".  

Note: Score and wickets are not less then zero. */

#include <stdio.h>

int main(){
    

    int remaining_wickets_pakistan;
    int score_pakistan;
    
    printf("Input the cricket score for Pakistan: ");
    scanf("%d", &score_pakistan);
    printf("Input the remaining wickets for Pakistan: ");
    scanf("%d", &remaining_wickets_pakistan);
    
    if(score_pakistan >= 0 && remaining_wickets_pakistan >= 0){
        
    
        if(score_pakistan > 300)
            printf("Pakistan won the match by %d wickets and a score of %d", remaining_wickets_pakistan, score_pakistan);
            
        else if(score_pakistan == 300 && remaining_wickets_pakistan == 0)
            printf("The match is a draw with %d score and %d wickets", score_pakistan, remaining_wickets_pakistan);
        
        else
            printf("Match was not won. %d remaining runs to win with %d wickets in hand", 301 - score_pakistan, remaining_wickets_pakistan);
    
    }
    else
        printf("Input not valid");
        
    return 0;
}
