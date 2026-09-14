#include<stdio.h>
    int main (){
        int time = 15;

        if (time<12){
            printf("good morning");
        }
        else if (time<18) {
            printf("good afternoon");
        } else {
            printf("good evening");
        }
        return 0;
    }