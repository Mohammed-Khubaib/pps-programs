#include <stdio.h>

int main(){
    int arr[10] = {10,3,5,6,7,89,9,90,10,11};


    // printf("%d \n",arr[0]);
    // printf("%d \n",arr[1]);
    // printf("%d \n",arr[9]);
    // // it prints a garbage value 
    // printf("%d \n",arr[100]);

    for (int i=0;i<10;i++){
        // printf("%d ",arr[i]);
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Sorted Array using selection sort:\n");
    for(int i=0;i<10;i++){
        // printf("Sorted Array using selection sort:\n");
        printf("%d ",arr[i]);
    }
    return 0;
}

