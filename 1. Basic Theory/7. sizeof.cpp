/*
sizeof() operator generally tells us the size of a particular datatype
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int a;
 float b;
 char c;
 double d;
 cout<<"Size of a is "<<sizeof(a)<<endl;   // 4 bytes
 cout<<"Size of b is "<<sizeof(b)<<endl;   // 4 bytes
 cout<<"Size of c is "<<sizeof(c)<<endl;   // 1 bytes
 cout<<"Size of d is "<<sizeof(d)<<endl;   // 8 bytes
return 0;
}