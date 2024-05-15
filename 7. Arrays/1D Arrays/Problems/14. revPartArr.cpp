// reverse a specific part of an array 

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

void PrintArr(int *arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int st,ed;

    cout<<"Enter the starting point of arr : ";
    cin>>st;
    cout<<"Enter the ending point of arr : ";
    cin>>ed;
    
    RevPartArr(arr,size,st,ed);
    cout<<"The rev arr is : ";
    PrintArr(arr,size);
    return 0;
}