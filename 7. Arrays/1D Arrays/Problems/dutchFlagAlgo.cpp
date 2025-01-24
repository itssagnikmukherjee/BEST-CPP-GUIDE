//dutch flag algorithm

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int noo = 0,notw=0,noth=0;
    int arr[] ={1,2,1,1,3,2,1,3,2};
    int size = sizeof(arr)/sizeof(int);
    int low=0,mid=0,high=size-1;
    while(mid<=high){
        if(arr[mid]==1){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        if(arr[mid]==2) mid++;
        if(arr[mid]==3){
            swap(arr[mid],arr[high]);
            high--;
            mid++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}