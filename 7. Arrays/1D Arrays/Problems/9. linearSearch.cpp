#include <bits/stdc++.h>

using namespace std;

int main(){

    int size;
    cout<<"Enter the size of arr : ";
    cin>>size;
    int arr[size];

    cout<<"Enter the elems of arr : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int elem;
    cout<<"Enter the elem you want to search : ";
    cin>>elem;
    bool flag = false;
    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            cout<<"At index no "<<i<<" the elem is present";
            flag = true;
        }
    }

    if(flag==false){
        cout<<"The elem is not present in arr";
    }

    return 0;
}