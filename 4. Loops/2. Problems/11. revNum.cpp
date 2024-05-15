/*
reverse a number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter the num :";
 cin>>n;
 int rev,last_digit;
 while(n>0){
    rev*=10;
    last_digit = n%10;
    rev+=last_digit;
    n/=10;
 }   
 cout<<rev;
return 0;
}