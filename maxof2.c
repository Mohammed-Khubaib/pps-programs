#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the value of n \n:");
    scanf("%d",&n);
    printf("Enter the value of m \n:");
    scanf("%d",&m);

    if (m>n)
    {
        printf("m>n\n");
    }
    else{
        printf("n>m\n");
    }
    
    return 0;
}

/*
Algorithm:

step 1:let n and m be two numbers(int or float)
step 2: if n>m print "n>m"
step 3 :else print "n<m"
step 4 : end
*/
