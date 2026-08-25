#include<stdio.h>
 int main() 
 {
    int i;
   for(i=0;i<=10;i++){
    if(i==5){
        continue;
    }
    printf("%d\n", i);
    if (i==9){
        break;
    }
    
   }
   return 0;

 }