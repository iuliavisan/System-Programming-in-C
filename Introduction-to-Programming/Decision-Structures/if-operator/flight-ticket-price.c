#include <stdio.h>

int main(){
    char ticket_type;
    float original_price;
    float discount_got;
    float discount_price;
    char wifi;
    char meal;
    int service_charges = 0;
    float total_ticket_price = 0;
  
    printf("Enter your ticket type: B = Business Class & E = Economy Class: ");
    scanf("%c", &ticket_type);
    
    // //test1
    // printf("test1 ticket type: %c\n", ticket_type);
    
    
 
    
    if(ticket_type == 'B' || ticket_type == 'E'){
        
    printf("Enter Your Ticket Original Price: ");
    scanf("%f", &original_price);
    
    
    // //test2
    // printf("test 2 original price: %.2f$\n", original_price);
    
        
        if(ticket_type == 'B'){
            if(original_price >= 0)
                printf("Ticket Type: Business Class\nOriginal Price: %.2f$\nDiscount Got: No discount\nFree Wifi and Extra Meal Service\n", original_price);
            else
                printf("Price cannot be negative! Try again!");
        }
        else if(ticket_type == 'E'){
    
            if(original_price >= 0){
            
            printf("Do you need Wi-Fi? It will cost extra (50$). Choose Y-Yes or N-No: \n");
            scanf(" %c", &wifi);
    //test 3
    // printf("test3 wifi: %c\n", wifi);
            
            printf("Do you need Extra Meal(150$)? Choose Y-Yes or N-No: \n");
            scanf(" %c", &meal);
    //test4
    // printf("test4 meal: %c\n", meal);
                
            printf("Ticket Type: Economy Class\nOriginal Price: %.2f$\n", original_price);
            
                if(original_price < 500){
                    printf("Discount Got: 5%%\n");
                    discount_price = original_price - 0.05 * original_price;
                }
                else if(original_price >= 500 && original_price < 1000){
                    printf("Discount Got: 7%%\n");
                    discount_price = original_price - 0.07 * original_price;
                }
                else if(original_price >= 1000 && original_price < 2000){
                    printf("Discount Got: 10%%\n");
                    discount_price = original_price - 0.10 * original_price;
                }
                else if(original_price >= 2000 && original_price < 3000){
                    printf("Discount Got: 12%%\n");
                    discount_price = original_price - 0.12 * original_price;
                }
                else if(original_price >= 3000 && original_price < 4000){
                    printf("Discount Got: 15%%\n");
                    discount_price = original_price - 0.15 * original_price;
                }
                else{
                    printf("Discount Got: 20%%\n");
                    discount_price = original_price - 0.20 * original_price;
                }
                
            printf("Discounted Price: %.2f$\n", discount_price);
            
            
                if((wifi == 'Y' || wifi == 'N') || (meal == 'Y' || meal == 'N')){
                        if(wifi == 'Y')
                            service_charges = service_charges + 50;
                        if(meal == 'Y') 
                            service_charges = service_charges + 150;
            
                    printf("Service Charges(For Wi-Fi and Extra Meal): %d$\n", service_charges);
                }else 
                    printf("Input not valid. Only Y/N accepted\n");
            
                    total_ticket_price = discount_price + service_charges;
                    printf("Ticket Price To Pay: %.2f$\n", total_ticket_price);
                
            }else
                printf("Price cannot be negative. Try again!\n");
            
            
            
    
        
        }
        
        
    // else{
    //     printf("Input not valid. Only 'B'(Business Class) or 'E'(Economy Class)");
    }else
        printf("Input not valid");
    
    
        
    return 0;
}
