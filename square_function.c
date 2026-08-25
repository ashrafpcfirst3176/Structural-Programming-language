#include<stdio.h> 
 int square( int a);

  int square(int a) {
    return a*a ;
  }
 int main  () { 
    int a; 
    printf("enter length :");
    scanf("%d", &a);
     
    int result=square(a);

    printf("area is %d", result);
  return 0;
 }
 