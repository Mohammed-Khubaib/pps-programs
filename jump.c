#include <stdio.h>

int main(){
    
    int i = 0;

    for (i=0;i<11;i++){
        if(i%8==7){
            break;
        }
        printf("%d ",i);
    }
    return 0;
}

// a = bq+r
// 8 = 8*1 + 0