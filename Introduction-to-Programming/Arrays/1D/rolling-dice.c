/* Problem: Dice Rolling Simulation (Arrays & Random Numbers)

Write a computer program that simulates the rolling of two dice.

Simulation Logic:
- The program must use the `rand` function to roll the first die and the `rand` 
  function again to roll the second die.
- Each die must result in an integer value between 1 and 6.
- Calculate the sum of the two values for each roll.

Tallying and Frequency:
- The sum of the two dice will vary from 2 to 12.
- The program must simulate rolling the two dice 1,000 times.
- Use a one-dimensional array to tally (count) how many times each possible sum 
  (from 2 to 12) appears during the simulation.

Output:
- Print the total count for each sum after the 1,000 rolls are completed.

Note: 
Statistically, 7 is the most frequent sum, while 2 and 12 are the least frequent.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dice1;
    int dice2;
    int sum;
    int arr[1000];
    int flags[15] = {0};
    int tsum = 0;
    
    int i;
    for(i = 0; i < 1000; i++){
        
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        arr[i] = sum; //we store the sums inside this array
    }
    
    for(i = 0; i < 1000; i++){
        if(arr[i] == 2)
            flags[2]++;
        else if(arr[i] == 3)
            flags[3]++;
        else if(arr[i] == 4)
            flags[4]++;
        else if(arr[i] == 5)
            flags[5]++;
        else if(arr[i] == 6)
            flags[6]++;
        else if(arr[i] == 7)
            flags[7]++;
        else if(arr[i] == 8)
            flags[8]++;
        else if(arr[i] == 9)
            flags[9]++;
        else if(arr[i] == 10)
            flags[10]++;
        else if(arr[i] == 11)
            flags[11]++;
        else if(arr[i] == 12)
            flags[12]++;
            
    }
    //frequency of sums: 
    
    printf("The frequency of 2 is: %d\n", flags[2]);
    printf("The frequency of 3 is: %d\n", flags[3]);
    printf("The frequency of 4 is: %d\n", flags[4]);
    printf("The frequency of 5 is: %d\n", flags[5]);
    printf("The frequency of 6 is: %d\n", flags[6]);
    printf("The frequency of 7 is: %d\n", flags[7]);
    printf("The frequency of 8 is: %d\n", flags[8]);
    printf("The frequency of 9 is: %d\n", flags[9]);
    printf("The frequency of 10 is: %d\n", flags[10]);
    printf("The frequency of 11 is: %d\n", flags[11]);
    printf("The frequency of 12 is: %d\n", flags[12]);

    for(i = 2; i <= 12; i++){
        tsum = tsum + flags[i]; //total sum
    }
    printf("Total number of frequency is %d\n", tsum);





    
   
    
    
    return 0;
}
