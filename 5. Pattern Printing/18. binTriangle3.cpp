/*

print the following pattern 

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=i;j++){ // j ----> no of cols
        if((i+j)%2==0) cout<<1;
        else cout<<0;
    }
    cout<<endl;
 }   
return 0;
}