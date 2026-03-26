#include<stdio.h>

int binarySearch(int key,int n,int arr[]){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int key = 10;
    int searchResult = binarySearch(key,5,arr);
    if(searchResult!=-1){
        printf("\nElement Found\nIndex: %d",searchResult);
    }
    else{
        printf("\nElement Not Found");
    }
    return 0;
}