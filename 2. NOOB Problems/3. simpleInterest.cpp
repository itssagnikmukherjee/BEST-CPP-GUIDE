// WAP to find Simple Interest given P,R,T

#include<bits/stdc++.h>
using namespace std;

int main(){
 int p,r,t;
 cout<<"Enter the principle : ";
 cin>>p;
 cout<<"Enter the rate of interest : ";
 cin>>r;
 cout<<"Enter the time period : ";
 cin>>t;   
 int SI = (p*r*t)/100;
 cout<<"Simple interest is : "<<SI<<endl;
return 0;
}