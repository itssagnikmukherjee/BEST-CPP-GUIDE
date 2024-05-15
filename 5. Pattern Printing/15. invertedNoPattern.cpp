/*

print the following pattern 

1
21
321
4321
54321


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=i;j>=1;j--){ // j ----> no of cols
        cout<<j;
    }
    cout<<endl;
 }   
return 0;
}