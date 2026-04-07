#include <stdio.h>
#include <stdbool.h>

int main(){

    //Logical Operators

            // NOT (NEGATE) OPERATOR

    bool isSunny = true;

    if(!isSunny){
        printf("It is SUNNY outside.");
    }else{
        printf("It is CLOUDY outside.");
    }

    /*
    int temp = 0;

                || OR OPERATOR

    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD.");
    }else{
        printf("The temperature is BAD.");
    }

    */
    /*
            && OPERATOR

    if(temp <= 0 && temp >= 30){
        printf("The temperature is BAD.");
    }else{
        printf("The temperature is GOOD.");
    }
    */

    return 0;
}