/*

print the following pattern 

11111
22222
33333
44444
55555

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=row;j++){ // j ----> no of cols
        cout<<i;
    }
    cout<<endl;
 }   
return 0;
}