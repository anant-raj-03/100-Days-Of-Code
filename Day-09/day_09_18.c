// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include <stdio.h>
 int main() {
    
    float percentage;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input. Enter a percentage between 0 and 100.\n");
        return 1;
    }
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}