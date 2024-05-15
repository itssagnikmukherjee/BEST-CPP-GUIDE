/*

break; syntax is used to terminate the iteration in the loop

continue; syntax is used to break one iteration if the specified condition occurs then continues  

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        if(i==5) break;
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<10;i++){
        if(i==5) continue;
        cout<<i<<endl;
    }
return 0;
}