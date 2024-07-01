// WAP to print the Pre In post format

#include <bits/stdc++.h>

using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
}

int main(){
    pip(3);
    return 0;
}