// WAP to find if an array is sorted or not

#include <bits/stdc++.h>

using namespace std;

void ifSorted(int *arr,int size){
    bool flag = true;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                flag = false;
                break;
            }
        }
    }
    if(flag==true) cout<<"Sorted";
    else cout<<"Unsorted";
}

int main(){
    int arr[]={1,2,23,442};
    int size = sizeof(arr)/sizeof(int);
    ifSorted(arr,size);
    return 0;
}