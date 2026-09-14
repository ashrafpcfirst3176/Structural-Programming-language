#include<stdio.h>
    int main (){
        int i =1, multi = 1;
        do {
            multi *= i;
            i++;
        } while (i<=5);

        printf("%d", multi);
        
        return 0;
    }