/*

Take 10 nums as input and check how many of them are odd and how many are even

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int oddCount=0,evenCount=0;// both variables are counters and we need to initialize a counter by 0
 for(int i=1;i<=10;i++){
    cout<<"Enter num "<<i<<endl;
    cin>>i;
    if(i%2==0) evenCount++;
    else oddCount++;
 }
 cout<<"Odd no : "<<oddCount;
 cout<<"Even no : "<<evenCount;
return 0;
}