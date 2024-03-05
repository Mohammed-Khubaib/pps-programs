#include <stdio.h>

int main(){
    int arr[10] = {1,5,7,3,9,4,3,4,3,2};
    int key = 3;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==key){
            printf("%d ",i);
            // break;
        }
    }
    return 0;
}