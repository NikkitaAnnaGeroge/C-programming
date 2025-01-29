#include <stdio.h>
 int main(){
 int number1,number2,sum,sub,multi,div,remain,choice;
 printf("/n enter two numbers");
 scanf("%d%d",&number1,&number2);
 printf("Enter the operator");
 printf("\n 1.Addition");
 printf("\n 2.Subtraction");
 printf("\n 3.Multiplication");
 printf("\n 4.Division");
 printf("\n 5.Remainder");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
   sum=number1+number2;
   printf("The sum is:");
   printf("%d",sum);
   break;
  case 2:
   sub=number1-number2;
   printf("The difference is:");
   printf("%d",sub);
   break;
  case 3:
   multi=number1*number2;
   printf("The product is:");
   printf("%d",multi);
   break;
  case 4:
   div=number1/number2;
   printf("The quotient is:");
   printf("%d",div);
   break;
  case 5:
   remain=number1%number2;
   printf("The remainder is");
   printf("%d",remain);
   break;
 }
 return 0;
}
 

 
 
 





