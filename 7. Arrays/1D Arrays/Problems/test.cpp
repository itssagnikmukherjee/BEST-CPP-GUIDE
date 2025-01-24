#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,0,1,1,0,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(arr[j]==1) j--;
        if(arr[i]==0) i++;
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}