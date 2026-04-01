#include <stdio.h>
//#include <stdbool.h>
#include <string.h>

int main(){

    // if statements

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name.");
    }
    else{
        printf("Hello %s", name);
    }
    
    /*
    EXAMPLE #2
    
    bool isStudent = false;

    if(isStudent == true){
        printf("You are a student.");
    }else{
        printf("You are not a student.");
    }

    Example #1
    
    //int age = 21;
    //int age = 12;
    //int age = -1;
    int age = 0;
    //int age = 70;

    printf("Enter your age: ");
    scanf("%d", age);
    
    if(age >= 65){
        printf("You are a senior.");
    }else if(age >= 18){
        printf("You are an adult.");
    }else if(age < 0){
        printf("You haven't been born yet.");
    }else if(age == 0){
        printf("You are a newborn.");
    }
    else{
        printf("You are a minor.");
    }
    */


    return 0;
}