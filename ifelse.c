#include <stdio.h>

int main(){
    int i =10;
    // if 
    if(i==10){
        printf("i=10");
    }

    // if else:
    if(i<10){
        printf("i<10");
    }
    else{
        printf("i>10");
    }
    // if ,else if,else:
    if (i==0){
        printf("i=0");
    }
    else if (i>0){
        printf("play");
    }
    else{
        printf("game");
    }
    //Nested ifelse

    if(i>=0){
        if(i%2==0){
            printf("even");
            if(i==0){
                printf("print");
            }
            else{
                printf("ooo");
            }
        }
        else{
            printf("odd");
        }
    }
    else{
        printf("nothing\n");
    }
    return 0;
}