#include <stdio.h>

int main() {
    /*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
    1.length = 5, breadth = 10
    2.length = 3, breadth = 7
    */
    int length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %.2d\n", area);
    printf("Perimeter of the rectangle: %.2d\n", perimeter);

    return 0;
}