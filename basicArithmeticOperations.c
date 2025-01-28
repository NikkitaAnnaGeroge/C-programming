*
    To Perform Basic Arithmetic Operations
    Author : Nikkita Anna George
    Date   : 27-01-2025

*/

#include<stdio.h>
int main(){
    int num1,num2,sum,difference,product,quiotient,remainder,choices;
    
    printf("Choices are:");
    printf("\n1.Addition, 2.Subtraction, 3.Multiplication, 4.Division, 5.Modulus");
    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);
    printf("\nEnter the choice:");
    scanf("%d",&choices);
    switch(choices){
        case 1:choices==1;
               sum = num1 + num2;
               printf("sum of %d + %d = %d",num1,num2,sum);
               break;
        case 2:choices==2;
               difference = num1 - num2;
               printf("Difference of %d - %d = %d",num1,num2,difference);
               break;
        case 3:choices==3;
               product = num1 * num2;
               printf("product of %d x %d = %d",num1,num2,product);  
               break;
        case 4:choices==4;
               quiotient = num1 / num2;
               printf("quiotient of %d / %d = %d",num1,num2,quiotient); 
               break;
        case 5:choices==5;
               remainder = num1 % num2;
               printf("remainder  of %d % %d = %d",num1,num2,remainder);  
               break;         



               
    }
    return 0;
}
