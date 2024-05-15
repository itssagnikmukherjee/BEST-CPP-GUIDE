// The most easiest searching algo is Linear Search
// We can search element whether an array is sorted or unsorted

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {3,6,7,8,2,34,12,45,34};
    int n;
    int size = sizeof(arr)/sizeof(int);
    bool flag = false;
    cout<<"Enter the target : ";
    cin>>n;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            cout<<"Element found at index : "<<i<<endl;
            flag = true;
        }
    }

    if(flag==false){
        cout<<"Element not present in arr"<<endl;
    }

    return 0;
}