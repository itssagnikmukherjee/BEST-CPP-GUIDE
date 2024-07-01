// INSERTION SORT

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {2,3,6,1,0,1,70,9,-5};
    int size = sizeof(arr)/sizeof(int);

    for(int i=1;i<size;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}