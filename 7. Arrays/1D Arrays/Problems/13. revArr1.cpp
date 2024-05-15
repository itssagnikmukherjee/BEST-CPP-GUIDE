// reverse and array and store it into another array

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int brr[size];
    for(int i=0,j=size-1;i<size,j>=0;i++,j--){
        brr[j]=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}