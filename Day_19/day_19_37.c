// Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
int main(){
    
    int a, b, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (x * y) / hcf;
    printf("LCM is: %d\n", lcm);
    return 0;
}