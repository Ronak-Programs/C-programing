#include <stdio.h>

int main() {
    float num1, num2, sum, diff, prod, div;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        div = num1 / num2;
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", diff);
        printf("Multiplication = %.2f\n", prod);
        printf("Division = %.2f\n", div);
    } else {
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", diff);
        printf("Multiplication = %.2f\n", prod);
        printf("Division = Not possible (denominator = 0)\n");
    }

    return 0;
}
