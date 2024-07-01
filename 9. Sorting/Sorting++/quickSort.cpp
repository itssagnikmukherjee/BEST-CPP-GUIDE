#include <bits/stdc++.h>

using namespace std;

int printArr(int *arr, int size){
    cout<<"Your array is : ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int *arr, int st_idx, int ed_idx){
    int pivot = arr[st_idx];
    int count = 0;
    for(int i=st_idx;i<ed_idx;i++){
        if(arr[i]<pivot){
           count++; 
        }
    }
    int pivotIdx = count+st_idx;
    swap(arr[st_idx],arr[pivotIdx]);
}

void quickSort(int *arr, int st_idx, int ed_idx){
    if(st_idx>=ed_idx) return;
    int pivotIdx = partition(arr,st_idx,ed_idx);
    quickSort(arr,st_idx,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ed_idx);
}


int main(){

    int arr[] = {5,1,8,2,3,6,7,4};
    int size = sizeof(arr)/sizeof(int);
    printArr(arr,size);
    quickSort(arr,0,size-1);


    return 0;
}