#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal = 0.0;
    float rate = 0.0;
    float time = 0.0;
    float total = 0.0;
    float ci = 0.0;

    
    //Principal Compound Calculator
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    /* 2. Calculation 
       Formula: Amount = P * (1 + r/100)^t
    */
    total = principal * pow((1 + rate / 100), time);
    ci = total - principal; // Compound Interest only

    printf("\n--- Results --- \n");
    printf("Total Amount: %.2f\n", total);
    printf("Compound Interest: %.2f\n", ci);

    return 0;
}