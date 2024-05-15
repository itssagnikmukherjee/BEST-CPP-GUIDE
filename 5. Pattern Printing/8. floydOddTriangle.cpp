/*

print the following pattern 

1
3 5
7 9 11
13 15 17 19


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 int a=1;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=i;j++){ // j ----> no of cols
        cout<<a;
        a+=2;
    }
    cout<<endl;
 }   
return 0;
}