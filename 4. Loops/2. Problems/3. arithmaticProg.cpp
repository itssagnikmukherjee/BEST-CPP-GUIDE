/*
WAP to display the AP 
4 7 10 13 16 upto n terms
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n : ";
 cin>>n;
 int a = 4;
 for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a+=3;
 }   
return 0;
}