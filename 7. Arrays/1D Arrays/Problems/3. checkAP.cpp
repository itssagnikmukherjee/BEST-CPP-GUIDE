// check whether a series is in AP or not

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int cd = arr[1] - arr[0];
    bool flag = true;
    for(int i=2;i<size-1;i++){
        if(arr[i+1]-arr[i]!=cd){
            flag = false;
        }
    }

    if(flag) cout<<"series in AP";
    else cout<<"series is not in AP";

    return 0;
}