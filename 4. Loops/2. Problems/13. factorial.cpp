/* factorial of a number */

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter the num :";
 cin>>n;
 int fact=1;
 if(n==0 || n==1){
    cout<<1;
 }
 else if(n<0){
    cout<<"Invalid Input";
 }
 else{
    for(int i=n;i>=1;i--){
    fact*=i;
 }
 cout<<fact;
 }
return 0;
}