// You have to climb stairs where n = no of stairs,
// one can climb one or two stairs at a time, 
// find total no of ways a person can climb

#include <bits/stdc++.h>

using namespace std;

int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return (n-1) + (n-2);
}

int main(){
    cout<<stair(6);
    return 0;
}