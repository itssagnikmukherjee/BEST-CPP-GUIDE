/*

print the following pattern 

ABCDE
FGHIJ
KLMNO
PQRST
UVWXY

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows :";
 cin>>row;
 int a = 65;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=row;j++){ // j ----> no of cols
        cout<<(char)a;
        a++;
    }
    cout<<endl;
 }   
return 0;
}