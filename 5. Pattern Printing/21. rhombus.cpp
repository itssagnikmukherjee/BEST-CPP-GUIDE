/*

print the following pattern 

          * * * * * 
        * * * * * 
      * * * * *
    * * * * *
  * * * * *
  
*/

// we need to print spaces here too so let's assume it as 

/* 

- - - - * * * * * *      - - - -       * * * * *
- - - * * * * * *        - - -         * * * * * 
- - * * * * * *      =   - -      +    * * * * *
- * * * * * *            -             * * * * *
* * * * * *                            * * * * *

                    inverted triangle  +  square
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
 // solid square
    for(int k=1;k<=row;k++){
        cout<<"*";
    }
    cout<<endl;
 }

return 0;
}