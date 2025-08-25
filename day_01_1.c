#include <stdio.h>

int main() {
     /*Write a program to input two numbers and display their sum.
     1.num1 = 3 , num2 = 4
     2.num1 = -1 , num2 = 20
     */
    int num1, num2, sum;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("sum = %d\n", sum);
    return 0;
}