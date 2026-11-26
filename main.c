#include <stdio.h>
#include <math.h>

void clear_input_buffer(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        // Discard leftover characters in stdin
    }
}

int read_double(const char *prompt, double *value) {
    printf("%s", prompt);
    if (scanf("%lf", value) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        clear_input_buffer();
        return 0;
    }
    return 1;
}

int calculate(double num1, double num2, char op, double *result) {
    switch (op) {
        case '+':
            *result = num1 + num2;
            return 1;
        case '-':
            *result = num1 - num2;
            return 1;
        case '*':
            *result = num1 * num2;
            return 1;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            *result = num1 / num2;
            return 1;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
                return 0;
            }
            *result = fmod(num1, num2);
            return 1;
        default:
            printf("Error: Invalid operator '%c'.\n", op);
            return 0;
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

        if (!read_double("Enter first number: ", &num1)) {
            choice = 'y';
            continue;
        }

        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);

        if (!read_double("Enter second number: ", &num2)) {
            choice = 'y';
            continue;
        }

        if (calculate(num1, num2, op, &result)) {
            printf("Result: %.2lf\n", result);
        }

        clear_input_buffer();
        printf("\nPerform another calculation? (y/n): ");
        scanf(" %c", &choice);
        clear_input_buffer();

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
