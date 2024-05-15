/*
WAP to display table of given num
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int num;
 cout<<"enter the num : ";
 cin>>num;
 for(int i=1;i<=10;i++){
    cout<<num<<"X"<<i<<"="<<num*i<<endl;
 }   
return 0;
}