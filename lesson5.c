//User Input

#include <stdio.h>
#include <string.h> // caters string functions like catering w/ whitespaces

int main(){

    int age = 0; //int age;
    float gpa = 0.0f; //float gpa;
    char grade = '\0'; //char grade;
    char name[30] = ""; //char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    //scanf("%s", &name); //won't read if you have whitespaces

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    
    return 0;
}