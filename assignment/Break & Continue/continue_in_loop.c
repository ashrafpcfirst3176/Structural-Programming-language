#include<stdio.h>
    int main () {
     int i = 0;

     while (i < 20) {
    if (i == 4 || i == 11) {
    i++;
    continue;
    }
    printf("%d\n", i);
     i++;
}
  return 0;
    }