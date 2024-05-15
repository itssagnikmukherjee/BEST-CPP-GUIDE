/* 
Print all the numbers from 1 to 100 that are divisible by 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 for(int i=1;i<=100;i++){
    if(i%3==0){
        cout<<i<<endl;
    }
 }   
return 0;
}