#include<stdio.h>
int main(){
  int limit,i;
  printf("Enter the limit");
  scanf("%d",&limit);
  printf("Enter the elements:");
  int number[limit];
  for (i=0;i<limit;i++){
    scanf("%d",&number[i]);
  }
  int smallest=number[0];
  int largest=number[0];
  for (i=0;i<limit;i++){
  
   if(number[i]<smallest)
   {
     smallest=number[i];
   }
    if(number[i]>largest){
     largest=number[i];
   }
   }
  printf("largest is:%d",largest);
  printf("smallest is:%d",smallest);
  return 0;
  }
    
     
   
  
  
