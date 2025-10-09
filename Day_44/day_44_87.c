//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isalpha(str[i])) {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
