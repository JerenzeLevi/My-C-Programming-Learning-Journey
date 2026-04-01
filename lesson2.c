//Variables
#include <stdio.h>
#include <stdbool.h> //we need this for boolean

int main(){

    int age = 18;
    int year = 2026;
    int quantity = 1;

    printf("You are a %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %dx item\n\n", quantity);

    float gwa = 1.0;
    float price = 99.99;
    float temperature = -10.1;

    printf("My GWA is %.2f\n", gwa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.2f°F\n\n", temperature);

    double pi = 3.141592653589793;
    double e = 2.718281828459045;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of euler's number is %15lf\n\n", e);

    char grade = 'A';
    char * symbol = "!";
    char * currency = "¥";

    printf("Your grade is %c\n", grade);
    printf("The symbol I chose is %s\n", symbol);
    printf("The currency is %s\n\n", currency);
    

    /*
    WHAT! C HAS NO STRING??!!? We use an array of characters
    you say?!?!? array waaaah
    */

    char name[] = "Sarai Cutie";
    
    printf("Hello %s\n", name);

    /*
    My bad, I just remembered the arrays in java. 
    It's not actually that complicated
    Hey! I reacted so fast
    */
 
    char food[] = "Dunkin Donut";
    char email[] = "emailCTF{ReverseEngineeringHereICome@fearme.com}";

    printf("My favourite food is %s.\n", food);
    printf("My email is %s.\n\n", email);
    
    bool isOnline = true; // 1 is valid
    bool feelingsReciprocatedByCrush = false;

    printf("%d\n", isOnline);
    printf("%d\n", feelingsReciprocatedByCrush);

    //quick demonstration

    if(isOnline){
        printf("You are online.\n");
    }else{
        printf("You are Offline.\n");
    }

    bool isStudent = true;
    if(isOnline){
        printf("You are a student.\n");
    }else{
        printf("Who're you?.\n");
    }

    bool forSale = false;
    if(forSale){
        printf("The item (You) is for sale.\n");
    }else{
        printf("That item (You) is not for sale.\n");
    }


    return 0;
}