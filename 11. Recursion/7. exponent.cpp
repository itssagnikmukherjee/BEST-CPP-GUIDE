// WAP to calculate a^b

#include <bits/stdc++.h>

using namespace std;

int exp(int a,int b){

    if(a==0 && b==0){
        cout<<"Not defined";
    }
    if(b==0) return 1;
    int ex = a*exp(a,b-1);
    return ex;
}

int main(){
    cout<<exp(2,3);
    return 0;
}