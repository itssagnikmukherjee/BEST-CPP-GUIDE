// check missing elem in a series is in AP 

#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {2,4,6,8,12};
    int size = sizeof(arr)/sizeof(int);
    int cd = arr[1] - arr[0];
    bool flag = true;
    for(int i=2;i<size-1;i++){
        if(arr[i+1]-arr[i]!=cd){
            flag = false;
            cout<<"The series breaks from idx "<<i<<endl;
            cout<<"Missing elem is : "<<arr[i]+cd<<endl;
            break;
        }
    }

    if(flag) cout<<"series in AP";
    else cout<<"series is not in AP";

    return 0;
}