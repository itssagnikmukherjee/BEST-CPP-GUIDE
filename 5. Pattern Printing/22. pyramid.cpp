/*

print the following pattern 

          * 
        * * * 
      * * * * *
    * * * * * * *
  * * * * * * * * *
  
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows :";
 cin>>row;
 int nsp = row-1; // nsp --> no of spaces
 int nst = 1;     // nst --> no of stars

  for(int i=1;i<=row;i++){
    for(int j=nst;j<=nsp;j++){
        cout<<"*";
        nsp--;
        nst++;
    }
  }

return 0;
}