#include <stdio.h>

int main() {
     /*Write a program to input two numbers and display their sum.
     1. a = 3 , b = 4
     2. b = -1 , b = 20
     */
    int a, b, sum;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("sum = %d\n", sum);
    return 0;

}
