//Q91: Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--; 
            i--;  
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}
