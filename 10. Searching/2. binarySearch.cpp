// Implementation of binary search O(logn)
// Binary search will only occur when the array is sorted

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {3,4,6,70,80,90};
    int size = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = size-1;
    int target;
    bool flag = false;
    cout<<"Enter target : ";
    cin>>target;
    while(low<=high){
        int mid = (low+high)/2;
        if(target==arr[mid]){
            cout<<"Elem found at "<<mid<<" index"<<endl;
            flag = true;
            break;
        }
        else if(target>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<"Elem not present in array";
    }
    return 0;
}