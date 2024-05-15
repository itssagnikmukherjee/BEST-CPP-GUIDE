// find first occurance in log(n) complexity

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,1,2,2,2,3,3,3,3,3,4,5,5,6,6,7,7};
    int size = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = size-1;
    int target;
    cout<<"Enter target : ";
    cin>>target;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(target==arr[mid]){
            flag = true;
            if(arr[mid-1]==target){
                high = mid - 1; 
            }else{
                cout<<"The first occurrence is in the idx "<<mid;
                break;
            }
        }
        else if(target>arr[mid]) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<"Elem not present in array";
    }

    return 0;
}