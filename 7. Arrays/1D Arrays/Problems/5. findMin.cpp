// find the max elem in arr

#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int min = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>min) min = arr[i];
    }
    cout<<"The min elem is : "<<min;
    return 0;
}