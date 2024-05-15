// WAP to find the lower bound and higher bound of a given number
// if the no is not present in the array then also find the lower bound assuming the location of the elem


#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {2,4,5,7,8,9,10,15};
    int n;
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter the target : ";
    cin>>n;

    int low = 0;
    int high = size-1;
    bool flag = false;


    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==n){
            cout<<"Lower bound will be "<<arr[mid-1]<<endl;
            cout<<"Lower bound will be "<<arr[mid+1]<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]<n) low = mid + 1;
        else high = mid - 1;
    }

    if(flag==false){
        cout<<"Lower bound will be : "<<arr[high]<<endl;
        cout<<"Higher bound will be : "<<arr[low]<<endl;
    }

    return 0;
}