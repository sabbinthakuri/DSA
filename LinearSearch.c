#include<stdio.h>

int linearSearch(int key,int n,int arr[]){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int key = 30;
    int searchResult = linearSearch(key,5,arr);
    if(searchResult!=-1){
        printf("\nElement Found\nIndex: %d",searchResult);
    }
    else{
        printf("\nElement Not Found");
    }
    return 0;
}