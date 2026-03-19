#include<stdio.h>

void bubbleSort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Sorted Arrays:\n");
    for(i=0;i<size;i++){
        printf("\n%d",arr[i]);
    }
}

int main(){
    int arr[10]={5,4,3,6,7,8,9,1,0,11};
    bubbleSort(arr,10);
    return 0;
}