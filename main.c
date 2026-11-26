
#include <stdio.h>

int main(void) {
    double num1, num2, result;
    char op;

    printf("========================\n");
    printf("     C CALCULATOR\n");
    printf("========================\n");

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("------------------------\n");
    printf("Result: %.2f\n", result);
    printf("========================\n");

    return 0;
}
