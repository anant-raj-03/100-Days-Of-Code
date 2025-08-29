#include <stdio.h>
int main() {
     /*Write a program to find and display the sum of the first n natural numbers.
     1.n = 5
     2.n = 10
     */

    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers = %d\n", n, sum);
    return 0;
}