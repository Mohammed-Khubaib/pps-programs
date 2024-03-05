#include <stdio.h>


int main(){
    int n =6;
    int i=0,f=1;
    for(i=n;i>1;i--){
        f = f*i;
    }
    printf("%d ! = %d",n,f);

    return 0;
}