// find the total no of pairs in an array elem which sums upto the given input

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(arr)/sizeof(int);
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]+arr[j]==num){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<num<<endl;
            }
        }
    }

    return 0;
}