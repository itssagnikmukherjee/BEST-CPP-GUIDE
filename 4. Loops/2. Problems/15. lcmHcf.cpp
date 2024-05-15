/*
find out LCM and HCF of 3 nums
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n1,n2,n3;
 cout<<"Enter nums :";
 cin>>n1>>n2>>n3;
 for(int i=1;i<=a%b;i++){
    if(i%n1==0 && i%n2==0 && i%n3) cout<<"LCM : "<<i; break;
 }   
 int hcf=1;
 int H;
 if(n1>n2 && n1>n3) H=n1;
 else if(n2>n1 && n2>n3) H=n2;
 else H=n3;
 for(int i=1;i<=H;i++){
    if(n1%i==0 && n2%i==0 && n3%i) cout<<"HCF : "<<i; break;
 }
return 0;
}