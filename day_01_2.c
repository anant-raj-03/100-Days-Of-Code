#include <stdio.h>

int main() {
    /*Write a program to input two numbers and display their sum, difference, product, and quotient.
    1.x = 10, y = 2
    2. x = 7, y = 3

    */

    int x, y, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    sum = x + y;
    difference = x - y;
    product = x * y;
    if (y != 0) {
        quotient = x / y;
        printf("Sum = %.2d\n", sum);
        printf("Difference = %.2d\n", difference);
        printf("Product = %.2d\n", product);
        printf("Quotient = %.2d\n", quotient);
    } else {
        printf("Sum = %.2d\n", sum);
        printf("Difference = %.2d\n", difference);
        printf("Product = %.2d\n", product);
        printf("Cannot divide by zero.\n");
    }

    return 0;
}