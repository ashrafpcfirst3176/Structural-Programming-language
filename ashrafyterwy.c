#include<stdio.h>  

  int square(int a)
  {
    return a*a;
  } 

 int main() {
 int length;
  printf("enter integer number :");
   scanf("%d", &length);
     int result = square(length);
     printf("area is %d", result);

    return 0;
 }