// find the max elem in arr

#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int max = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<"The max elem is : "<<max;
    return 0;
}