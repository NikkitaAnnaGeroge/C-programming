#include <stdio.h>
int main(){
  int row,coloumn;
  printf("\n Enter the  row and coloumn");
  scanf("%d%d",&row,&coloumn);
  int m1[row][coloumn],m2[row][coloumn],m3[row][coloumn];
  printf("\n Enter the first matrix");
  for (int i=0;i<row;i++){
     for(int j=0;j<coloumn;j++){
   scanf("%d",&m1[i][j]);
    }
  }
  printf("\n enter the second matrix");
  for (int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
    scanf("%d",&m2[i][j]);
    }
 }
  for (int i=0;i<row;i++){
   for (int j=0;j<coloumn;j++){
   scanf("%d",&m3[i][j];
   }
 }  
 printf("\n sum of first and second matrix is");
 for(int i=0;i<row;i++){
   for(int j=0;j<coloumn;j++){
     printf("%d",m3[i][j]);
  }  
 }    
 return 0;
 }

