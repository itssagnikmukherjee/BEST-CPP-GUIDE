//bring all the negative in the front and send all the positive in the back

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,-1,3,-2,4,-5,2,-3};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[j]>0) j--;
        if(arr[i]<0) i++;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
