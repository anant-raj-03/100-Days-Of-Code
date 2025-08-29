#include <stdio.h>
int main() {
    /*Write a program to input two numbers and display their sum, difference, product, and quotient.
    1.x = 10, y = 2
    2. x = 7, y = 3
    */

    float x, y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("Sum = %.2f\n", x + y);
    printf("Difference = %.2f\n", x - y);
    printf("Product = %.2f\n", x * y);
    printf("Quotient = %.2f\n", y != 0 ? x / y : 0.0);

    return 0;
}