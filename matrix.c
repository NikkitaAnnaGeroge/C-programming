#include <stdio.h>
int main(){
  int row,coloumn;
  printf("\n Enter the  row and coloumn");
  scanf("%d%d",&row,&coloumn);
  int matrix[row][coloumn];
  printf("\n Enter the elements");
  for (int i=0;i<row;i++){
   for(int j=0;j<coloumn;j++){
    scanf("%d",&matrix[i][j]);
   }
  }
  int sum=0;
  for (int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
      if(i==j){ 
        sum=sum+matrix[i][j];
    }
  }
}
  printf("\n The sum of diagonal elements is:");
  printf("%d",sum);
  return 0;
}

