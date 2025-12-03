//Q147: Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_DEPT_LENGTH 50
#define FILENAME "employees.dat"
struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    char department[MAX_DEPT_LENGTH];
    float salary;
};
void writeEmployeeData(struct Employee* emp, int count) {
    FILE* file = fopen(FILENAME, "wb");
    if (file == NULL) {
    perror("Error opening file for writing");
    return;
    }
    fwrite(emp, sizeof(struct Employee), count, file);
    fclose(file);
}
void readEmployeeData() {
    FILE* file = fopen(FILENAME, "rb");
    if (file == NULL) {
    perror("Error opening file for reading");
    return;
    }
    struct Employee emp;
    printf("Employee Details from file:\n");
    printf("ID\tName\tDepartment\tSalary\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
    printf("%d\t%s\t%s\t%.2f\n", emp.id, emp.name, emp.department, emp.salary);
    }
    fclose(file);
}
int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee* employees = (struct Employee*)malloc(n * sizeof(struct Employee));
    for (i = 0; i < n; i++) {
    printf("Enter details for employee %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &employees[i].id);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Department: ");
    scanf("%s", employees[i].department);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
    }
    writeEmployeeData(employees, n);
    free(employees);
    readEmployeeData();
    return 0;
}