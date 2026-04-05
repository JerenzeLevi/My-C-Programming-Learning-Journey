#include <stdio.h>
#include <stdbool.h>

int main(){

    //Nested if Statements

    float price = 10.00;
    bool isStudent = true; //10percent discount
    bool isSenior = false; //20percent discount
    

    //student = $9
    //senior = $8
    //student + Senior = $7

    if(isStudent){
        if(isSenior){
        printf("You get a student dscount of 10%");
        printf("You get a senior discount of 20%");
        price = price * 0.7;
        }   
        else{
            printf("You get a student dscount of 10%");
            price = price * 0.9;
        }
    }else{
        if(isSenior){
            printf("You get a senior dscount of 20%");
            price = price * 0.8;
        }
    }

    printf("\nThe price of a ticket is: $%.2f", price);

    return 0;
}