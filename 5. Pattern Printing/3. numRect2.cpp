/*

print the following pattern 

12345
12345
12345
12345
12345

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=row;j++){ // j ----> no of cols
        cout<<j;
    }
    cout<<endl;
 }   
return 0;
}