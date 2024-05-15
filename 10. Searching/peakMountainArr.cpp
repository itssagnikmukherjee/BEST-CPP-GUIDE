// find the peak idx of a mountain array
// this is same as finding the maximum elem in an array

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,8,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout<<"Peak elem is : "<<arr[mid];
            break;
        }
        else if(arr[mid]<arr[mid-1]) high = mid - 1;
        else low = mid + 1;
    }

    return 0;
}