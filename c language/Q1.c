// Implement a C program to simulate a simple calculator that performs addition, subtraction, multiplication, and division based on user input.


#include<stdio.h>


int main(){
    int num1,num2;
    char operation;

    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);


    printf("enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c",&operation);

    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

        case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

        case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
        case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    
    default:
    printf("operation not supported\n");
        break;
    }
}