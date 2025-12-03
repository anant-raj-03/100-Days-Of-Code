//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int marks;
};
int main() {
    struct Student* student = (struct Student*)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter student details (Name Roll_No Marks): ");
    scanf("%s %d %d", student->name, &student->roll_no, &student->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->roll_no, student->marks);
    free(student);
    return 0;
}