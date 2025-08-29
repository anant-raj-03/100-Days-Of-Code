#include <stdio.h>
int main() {

    /*Write a program to swap two numbers using a third variable.
    1. 3, 5
    2. -1, 1
    */

    int a, b, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable x
    x = a;
    a = b;
    b = x;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}