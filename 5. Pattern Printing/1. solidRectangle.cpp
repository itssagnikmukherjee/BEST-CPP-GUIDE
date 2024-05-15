/*

print the following pattern 

********
********
********
********

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row,col;
 cout<<"Enter the num of rows and cols :";
 cin>>row>>col;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=col;j++){ // j ----> no of cols
        cout<<"*";
    }
    cout<<endl;
 }   
return 0;
}