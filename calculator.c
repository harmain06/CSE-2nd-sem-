#include <stdio.h>

void calculator(float a, float b, char op) {
    if (op == '+') {
        printf("Result = %f\n", a + b);
    }
    else if (op == '-') {
        printf("Result = %f\n", a - b);
    }
    else if (op == '*') {
        printf("Result = %f\n", a * b);
    }
    else if (op == '/') {
        if (b != 0) {
            printf("Result = %f\n", a / b);
        }
        else {
            printf("Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator.\n");
    }
}

int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    calculator(num1, num2, op);

    return 0;
}