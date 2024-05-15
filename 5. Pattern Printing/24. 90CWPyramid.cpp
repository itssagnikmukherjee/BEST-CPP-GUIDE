// print the inverted pyramid

// *******
//  *****
//   ***
//    *

// explanation 

//   -       *******
//   --   +  *****
//   ---     ***
//   ----    *

#include <bits/stdc++.h>

using namespace std;

int main(){

    int row;
    cout<<"Enter the no of row : ";
    cin>>row;

    for(int i=1;i<=row;i++){
        

        for(int j=(2*i)-1;j>=1;j--){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=row-1;i>=1;i--){
        

        for(int j=(2*i)-1;j>=1;j--){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}