/*

print the following pattern 

********
*      *
*      *
********

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows :";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=row;j++){ // j ----> no of cols
        if(i==1 || i==row || j==1 || j==row) cout<<" * ";
        else cout<<"   ";
    }
    cout<<endl;
 }   
return 0;
}