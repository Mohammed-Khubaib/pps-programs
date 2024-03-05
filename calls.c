#include <stdio.h>

void callByVal(int x,int y){
  x=x+10;
  y=y*10;
  printf("call by value fuction\n");
  printf("x = %d, y = %d\n",x,y);


}

void callByReff(int *x,int *y){
// printf("x = %d, y= %d",*x,*y);
  *x=*x+10;
  *y=*y*10;
  printf("call by reference fuction\n");
  printf("x = %d, y = %d\n",*x,*y);

}

int main(){
    for(int i=0;i<10;i++){
    int d = 10/i;
    printf("d = %d",d);
    }
    int a=10,b=30;
    printf("a = %d, b = %d\n",a,b);
    callByVal(a,b);
    printf("a = %d, b = %d\n",a,b);
    callByReff(&a,&b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}