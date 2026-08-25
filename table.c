#include<stdio.h>
 
 void  table( int n ){
    int i; int result;
    for(i=1;i<=10; i++){
        result= i * n;
        printf("%d\n", result);
    }

 }
 

 int main() { 
    int n ;
  printf("enter number :");
   scanf("%d", &n);
    table(n);
    return 0;
 }