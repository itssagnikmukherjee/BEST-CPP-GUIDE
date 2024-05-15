// reverse and array without using another array (two pointer method)

#include <bits/stdc++.h>

using namespace std;

void RevArr(int *arr,int size){
    int i = 0;
    int j = size-1;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void PrintArr(int *arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    RevArr(arr,size);
    cout<<"The rev arr is : ";
    PrintArr(arr,size);
    return 0;
}