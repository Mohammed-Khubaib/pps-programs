#include <stdio.h>

int main(){
    int l,n,m;
    l = 1000;
    n = 100;
    m = 2;


    if (l>n && l>m)
    {
        printf("l>n and l>m\n");
    }
    else if (n>l && n>m){
        printf("n>l & n>m\n");
    }
    else{
        printf("m>l & m>n\n");
    }
    
    return 0;
}

/*
Algorithm:

step 1:let l, n and m be three numbers(int or float)
step 2: if l>n & l>m print "l>n & l>n"
      : if n>l & n>m print "n>l & n>m"
step 3 :else print "m>l & m>n"
step 4 : end
*/
