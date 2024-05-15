// suppose an array is [2|4|5|7|8|9|10|15]
// with the index no    0 1 2 3 4 5 6 7 
// if my target is : 7 the lower bound will be 4
// if my target is : 9 the upper bound will be 10

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {2,4,5,7,8,9,10,15};
    int n;
    int size = sizeof(arr)/sizeof(int);
    bool flag = false;
    cout<<"Enter the target : ";
    cin>>n;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            cout<<"The lower bound is : "<<arr[i-1]<<endl;
            cout<<"The upper bound is : "<<arr[i+1]<<endl;
            flag = true;
        }
    }

    if(flag==false){
        cout<<"Element not present in arr"<<endl;
    }

    return 0;
}