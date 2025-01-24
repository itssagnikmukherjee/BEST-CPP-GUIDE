#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int noo = 0,notw=0,noth=0;
    int arr[] ={1,2,1,1,3,2,1,3,2};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]==1) noo++;
        else if(arr[i]==2) notw++;
        else noth++;
    }
    for(int i=0;i<size;i++){
        if(i<noo) arr[i] = 1;
        else if(i<(noo+notw)) arr[i] = 2;
        else arr[i] = 3;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}