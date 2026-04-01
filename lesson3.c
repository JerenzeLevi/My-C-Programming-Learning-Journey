//Format Specifiers
#include <stdio.h>
#include <stdbool.h> 

int main(){

    int age = 18;
    float price = 99.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Sarai G.";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);


    //width 
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    printf("%+3d\n", num1);
    printf("%+3d\n", num2);
    printf("%+3d\n", num3);
    printf("%+3d\n", num4);

    //precision

    float price1 = 99.99;
    float price2 = 67.69;
    float price3 = 77.11;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    printf("%7.2f\n", price1);
    printf("%7.2f\n", price2);
    printf("%7.2f\n", price3);

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
    return 0;
}