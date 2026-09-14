#include<stdio.h>
    int main (){
        int x=12;
        if (x%2 == 0){
            printf("%d divisible by 2\n", x);
            if(x%3 == 0){
            printf("%d divisible by 3\n", x);
            }
            printf("%d divisible by 2 & 3", x);

        }
        return 0;
    }