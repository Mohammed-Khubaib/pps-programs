#include <stdio.h>

int main(){
    int mat[10] = {7,9,90,100,76,56,89,98,111,12};

    int c = 1;
    while(c<10){
        for(int i=0;i<10-c;i++){
            if(mat[i]>mat[i+1]){
                int t = mat[i+1];
                mat[i+1] = mat[i];
                mat[i] = t;
            }
        }
        c++;
    }

    printf("Sorted Array using selection sort:\n");
    for(int i=0;i<10;i++){
        // printf("Sorted Array using selection sort:\n");
        printf("%d ",mat[i]);
    }
    return 0;
}