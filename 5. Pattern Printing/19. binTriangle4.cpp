/*

print the following pattern 

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
0 1 0 1 0 1


*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 int a = 0;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=i;j++){ // j ----> no of cols
        if(a==0){
            a++;
            cout<<a;
        }else{
            a=0;
            cout<<a;
        }
    }
    cout<<endl;
 }   
return 0;
}