/*  
Ternary operator deals with 3 operands at a time
and it's a shorthand of if else
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a=10,b=20;
//   this returns the max value
// condition ? if true : if false
  int x = a > b ? a : b ;
  cout<<"Maximum is "<<x;  
  return 0;
}