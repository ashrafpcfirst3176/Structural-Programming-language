#include<stdio.h>
 int main () {
    int a, b, c;
    printf("enter numbers : ");
    scanf("%d %d %d",&a, &b ,&c);  

     switch((a>b && a>c) ? 1 : (b>c && b>a) ? 2 : 3) {
      case 1 : printf("%d is biggest", a);
       break;
      case 2 : printf("%d is biggest", b);
       break;
      case 3 : printf("%d is biggest", c);
       break;
     }

    return 0;
 }