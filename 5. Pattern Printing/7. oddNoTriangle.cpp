/*

print the following pattern 

1
13
135
1357
13579


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=2*i-1;j+=2){ // j ----> no of cols
        cout<<j;
    }
    cout<<endl;
 }   
return 0;
}