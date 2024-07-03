// WAP to print array using recursion

#include <bits/stdc++.h>

using namespace std;

void printArr(int *arr, int size, int idx){
    cout<<arr[idx]<<" ";
    if(idx==size-1) return;
    printArr(arr,size,idx+1);
}

int main(){

    int arr[] = {8,1,4,5,6,6,8,1,9};
    int size = sizeof(arr)/sizeof(int);
    int st_idx = 0;
    printArr(arr,size,st_idx);
    return 0;
}