// WAP to print the diamond pattern

//              *
//           *  *  *
//        *  *  *  *  *
//     *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *
//     *  *  *  *  *  *  *
//        *  *  *  *  *
//           *  *  *
//              *

#include <bits/stdc++.h>

using namespace std;

int main(){

    int row;
    cout<<"Enter the no of row : ";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=row-1;j>=i;j--){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=i-1;j>=1;j--){
            cout<<" * ";
        }

        cout<<endl;
    }

    for(int i=row-1;i>=1;i--){
        for(int j=row-1;j>=i;j--){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=i-1;j>=1;j--){
            cout<<" * ";
        }

        cout<<endl;
    }
    

    return 0;
}