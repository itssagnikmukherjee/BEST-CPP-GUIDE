// WAP to find the no of elements greater than the given no 

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int target;
    
    cout<<"Enter the target : ";
    cin>>target;
    
    int count = 0;
    
    for(int i = 0;i<size;i++){
        if(arr[i]>target){
            cout<<arr[i]<<" is greater than "<<target<<endl;
            count++;
        }
    }
    cout<<"Total no greater than "<<target<<"is "<<count;
    return 0;
}