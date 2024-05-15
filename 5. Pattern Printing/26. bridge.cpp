/*

print the bridge pattern 

*********
**** ****
***   ***
**     **
*       *   

*/

// EXPLANATION

// *****                 *****
// ****       -          ****
// ***   +   ---     +   ***
// **       -----        **
// *       -------       *


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=i;j<=row;j++){ // j ----> no of cols
        cout<<"*";
    }
    for(int j=2;j<=(2*i)-1;j++){
        cout<<" ";
    }
    for(int j=i;j<=row;j++){ 
        cout<<"*";
    }
    cout<<endl;
 }   
return 0;
}