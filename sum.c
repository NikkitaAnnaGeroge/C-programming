/*
    To find the sum of two integers
    Author : Nikkita Anna George
    Date   : 22-01-2025

*/
#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("\nThe sum of %d and %d = %d",num1,num2,sum);
    return 0;
}
