// rotate an array by n steps 

#include <bits/stdc++.h>

using namespace std;

void RevPartArr(int *arr,int size,int st, int ed){
    int i = st;
    int j = ed;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void RotateArr(int *arr,int size,int step){
    RevPartArr(arr,size,0,size-step-1);
    RevPartArr(arr,size,size-step,size-1);
    RevPartArr(arr,size,0,size-1);
}

void PrintArr(int *arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int step;
    cout<<"Enter the no of rotations : ";
    cin>>step;
    if(step>size) step = step % size; // if the circle completes
    RotateArr(arr,size,step);
    cout<<"After:"<<step<<"rotations the array will be : ";
    PrintArr(arr,size);
    return 0;
}