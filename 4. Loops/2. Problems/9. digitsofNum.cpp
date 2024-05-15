/*
Count digits of a num
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number :";
 cin>>n;
 int dig=0;
 while(n>0){
    n/=10;
    dig++;
 } 
 cout<<"No of digits : "<<dig;
return 0;
}