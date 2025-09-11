//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int main() {
    
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}