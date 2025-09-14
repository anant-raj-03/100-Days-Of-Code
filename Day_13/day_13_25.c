// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){
    
    float num1,num2;
    char operator;
    printf("Enter The First Number :");
    scanf("%f",&num1);
    printf("Enter The Second Number :");
    scanf("%f",&num2);
    printf("Enter The Operator (+, -, *, /, %%):");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
            printf("Result: %.2f",num1+num2);
            break;
        case '-':
            printf("Result: %.2f",num1-num2);
            break;
        case '*':
            printf("Result: %.2f",num1*num2);
            break;
        case '/':
            if(num2!=0)
                printf("Result: %.2f",num1/num2);
            else
                printf("Division by zero error");
            break;
        case '%':
            printf("Result: %.2f",num1-(int)(num1/num2)*(int)num2);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}
