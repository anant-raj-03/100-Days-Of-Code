// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main(){
    for(int j=1;j<=5;j++){
        for(int i=1;i<=j;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}