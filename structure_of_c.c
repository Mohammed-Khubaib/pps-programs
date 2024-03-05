#include<stdio.h>
// global declaration
void sayHello();
int n=0;
// this is a comment

int main(){
// declaration of n1,n2
int n1=10;
int n2=20;
int n=n1+n2;
printf("n=%d\n",n);
printf("n1+n2=n\n");
printf("%d+%d=%d\n",n1,n2,n);
sayHello();
return 0;
}

void sayHello(){
    printf("n=%d\n",n);
    printf("Hello\n");
}
