/*
check whether a number is prime or not
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number :";
 cin>>n;
 // it can be prime if the no of factors are more than two
 int count=0; // count is the counter
 if(n==1)cout<<"neither prime nor composite";
 else if(n<0) cout<<"not a valid input";
 else{
    for (int i = 1; i <= n; i++){
    if(n%i==0){
        count++;
    }
 }
 }
 if(count>2) cout<<"Composite";
 else cout<<"Prime";

return 0;
}