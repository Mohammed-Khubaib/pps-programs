// a*x*x+b*x+c=0
// a*x*x*x + b*x*x + c*x+d =0
#include <stdio.h>
void rootsQE(int a,int b,int c){
    int x=0,eq;
    // int eq =  a*(x*x)+b*(x)+c;
    //1*x*x+5*x+6
    // printf("value of eq = %d\n",eq);
    for(int x=-100;x<101;x++){
        eq =  a*(x*x)+b*(x)+c;
        if (eq==0){
            printf("x: %d ",x);
        }
    }
}

int rootsCE(int a,int b,int c,int d){
    int x =0,eq;
    for(x=-100;x<101;x++){
        eq =  a*(x*x*x) + b*(x*x) + c*(x)+d;
        if(eq==0){
            printf("x: %d ",x);
        }
    }
}

int main(){
    int a=1,b=-6,c=11,d=-6;
    rootsCE(a,b,c,d);
    return 0;
}
