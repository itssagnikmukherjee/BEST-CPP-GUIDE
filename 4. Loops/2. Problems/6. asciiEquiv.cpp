/*
Display all ascii values to 26 alphabets
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 for(int i=65;i<=90;i++){
    cout<<(char)i<<" ----> "<<i<<endl;
 }

 cout<<endl<<endl;

 for(int i=97;i<=122;i++){
    cout<<(char)i<<" ----> "<<i<<endl;
 }

return 0;
}