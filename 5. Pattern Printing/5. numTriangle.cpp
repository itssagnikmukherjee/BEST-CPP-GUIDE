/*

print the following pattern 

1
12
123
1234
12345


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=i;j++){ // j ----> no of cols
        cout<<j;
    }
    cout<<endl;
 }   
return 0;
}