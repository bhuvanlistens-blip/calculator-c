#include <stdio.h>
#include <math.h>

void clear_input_buffer(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        // Discard leftover characters in stdin
    }
}

int main(void) {
    double num1, num2, result;
    char op;
    char choice;

    do {
        printf("\n========================\n");
        printf("      C CALCULATOR\n");
        printf("========================\n");

        printf("Enter first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clear_input_buffer();
            choice = 'y';
            continue;
        }

        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clear_input_buffer();
            choice = 'y';
            continue;
        }

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case '%':
                if (num2 == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                } else {
                    result = fmod(num1, num2);
                    printf("Result: %.2lf\n", result);
                }
                break;
            default:
                printf("Invalid operator!\n");
                break;
        }

        clear_input_buffer();
        printf("\nPerform another calculation? (y/n): ");
        scanf(" %c", &choice);
        clear_input_buffer();

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
