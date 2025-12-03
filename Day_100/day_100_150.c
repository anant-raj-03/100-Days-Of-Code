//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student student;
    struct Student *ptr = &student;

    // Taking input from the user
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    // Displaying modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}