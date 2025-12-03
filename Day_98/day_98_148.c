//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int marks;
};
int areStudentsIdentical(struct Student* s1, struct Student* s2) {
    return (strcmp(s1->name, s2->name) == 0) &&
           (s1->roll_no == s2->roll_no) &&
           (s1->marks == s2->marks);
}
int main() {
    struct Student student1, student2;
    printf("Enter details for Student 1 (Name Roll_No Marks): ");
    scanf("%s %d %d", student1.name, &student1.roll_no, &student1.marks);
    printf("Enter details for Student 2 (Name Roll_No Marks): ");
    scanf("%s %d %d", student2.name, &student2.roll_no, &student2.marks);
    if (areStudentsIdentical(&student1, &student2)) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }
    return 0;
}