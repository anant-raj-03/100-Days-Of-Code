// Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float cp;
    printf("Enter The Cost Price");
    scanf("%f",&cp);
    float sp;
    printf("Enter The Selling Price");
    scanf("%f",&sp);
    float profit=((sp-cp)*100)/cp;
    float loss=((cp-sp)*100)/cp;

    if(sp>cp){
        printf("%f",profit);
    }
    else if(cp>sp){
        printf("%f",loss);
    }
    else{
        printf(" No Profit No Loss");
    }
     
    return 0;
}
