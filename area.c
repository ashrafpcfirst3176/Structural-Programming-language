#include<stdio.h>

 float squarearea( float a ){
    return a*a;
 }
  float circlearea( float b ){
    return 3.14 * b *  b;
 }
    float rectanglearea( float c, float d ){
      return c * d ;
    }
 int main () {
   int area ;
   printf("enter 1 for square\n enter 2 for circle\n enter 3 for rectangle\n number : ");
   scanf("%d", &area);
   switch (area)
   {
   case 1 : { float a ;
           printf("enter length :");
           scanf("%f", &a);
          float result = squarearea(a);
           printf("%f", result);
      break ;
   }
   case 2 : { float b ;
          printf("enter radius :");
           scanf("%f", &b);
          float result =  circlearea(b); 
          printf("%f", result);
      break ;
   }
   case 3 : { float c, d ;
         printf("enter length :");
           scanf("%f", &c);
           printf("enter width :");
            scanf("%f", &d);
           float result = rectanglearea(c,d);
           printf("%f", result);
      break;
   }
   default:
      break;
   }

  return 0;
 }