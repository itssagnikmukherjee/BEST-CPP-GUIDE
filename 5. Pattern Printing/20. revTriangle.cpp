/*

print the following pattern 

          *
        * *
      * * *
    * * * *
  * * * * *
  
*/

// we need to print spaces here too so let's assume it as 

/* 

- - - - *       - - - -       *
- - - * *       - - -         * *
- - * * *   =   - -      +    * * *
- * * * *       -             * * * *
* * * * *                     * * * * *

              Triangle 1   +   Triangle 2

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows:";
 cin>>row;
 for(int i=1;i<=row;i++){
 //spaces triangle (triangle 1)
    for(int j=row-1;j>=i;j--){
        cout<<" ";
    }
 // star triangle (triangle 2)
    for(int k=1;k<=i;k++){
        cout<<"*";
    }
    cout<<endl;
 }

return 0;
}