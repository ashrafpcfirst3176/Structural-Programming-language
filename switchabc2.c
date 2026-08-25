#include<stdio.h>
 int main () {
 int a, b, c;
   printf ("enter numbers \n ");
    scanf("%d %d %d", &a, &b, &c);
     
    switch(1) {
        case 1 : 
         if( a>c && a>b ) {
            printf("%d is the biggest", a);
         break;
         } 
        case 2 : 
        if( b>c && b>a ) {
            printf("%d is the biggest", b);
         break; 
        }
        case 3 : printf("%d is the biggest", c);
    
    return 0;
 }
}