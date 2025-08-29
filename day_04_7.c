#include <stdio.h>
int main() {
    /*Write a program to swap two numbers without using a third variable.
    1. 10, 20
    2. 7, 14
    */

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without using a third variable
    a = a + b; // Step 1: sum of both
    b = a - b; // Step 2: original a
    a = a - b; // Step 3: original b

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}