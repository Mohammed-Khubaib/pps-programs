#include <stdio.h>

int main(){
    // 1,2,...........10
    int i=1;
    // while , do-while, for

    while (i<=100){
        printf("%d \n",i);
        i++;
    }
    printf("i = %d",i);
    printf("\n");
    for(i=1;i<=100;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("i = %d\n",i);
    do{
        printf("%d ,",i);
        i++;
    }while(i<=100);
    return 0;
}