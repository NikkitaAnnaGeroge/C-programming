#include<stdio.h>
int main(){
  int limit,i,numbers;
  printf("Enter the limit");
  scanf("%d",&limit);
  printf("Enter the elements:");
  int number[limit];
  for (i=0;i<limit;i++){
    scanf("%d",&number[i]);
  }
  printf("\n enter the elements:");
  scanf("%d",&numbers);
  for(i=0;i<limit;i++){
    if(numbers ==number[i]){
      printf("In the given element found at position:%d",i+1);
    } 
  }
  
return 0;
}
    
  
