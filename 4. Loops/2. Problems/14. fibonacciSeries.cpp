/*
Print fibonacci series
0 1 2 3 5 8 13 21 34 upto n th term
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter n :";
 cin>>n;
 int a = 0;
 int b = 1;
 int next = 0;   
 for(int i=1;i<=n;i++){
    cout<<next<<" ";
    next = a+b;
    a=b;
    b=next;

 }
return 0;
}