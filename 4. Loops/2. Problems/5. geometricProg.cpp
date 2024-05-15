/*
WAP to display the GP 
3 12 48 upto n terms
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n : ";
 cin>>n;
 int a = 3;
 for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a*=4;
 }   
return 0;
}