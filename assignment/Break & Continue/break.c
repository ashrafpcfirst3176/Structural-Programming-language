#include<stdio.h> 
    int main () {

int i;

for (i = 0; i < 15; i++) {
if (i == 11) {
    break;
  }
  printf("%d\n", i);
 }
  return 0;
}