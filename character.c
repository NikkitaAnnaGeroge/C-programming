/* 
    To print a character in lower case
    Author: Nikkita Anna George
    Date  : 22-01-2025
*/    


#include<stdio.h>
int main(){
    char value;
    printf("\n Enter a character in capital letter:");
    value=getchar();
    value=value+32;
    printf("lower case letter:%c\n",value);
    return 0;
}
