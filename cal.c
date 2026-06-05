#include<stdio.h>
int main(){
    char operator;
    double num1;
    double num2;

    printf("mini cal 004\n\n");

    printf("Enter number 1:");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &operator);
    printf("Enter number 2:");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
    }
    else if (operator == '-') {
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
    }
    else if (operator == '*') {
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
    }
    else if (operator == '/') {
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
    }
    else {
        printf("Error! operator is not correct");
    } 
return 0;
}


