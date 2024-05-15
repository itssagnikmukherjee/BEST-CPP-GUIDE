/*

print the following pattern 

    *    
   * *   
  *   *  
 *     * 
*       *

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){ // i ---> no of rows
    for(int j=1;j<=2*row-1;j++){ // j ----> no of cols
        if(i+j==row+1 || j-i==row-1) cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
 }   
return 0;
}