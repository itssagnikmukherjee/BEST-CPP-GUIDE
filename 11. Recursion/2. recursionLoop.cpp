// Recursion can be used instead of loops

#include <bits/stdc++.h>

using namespace std;

void haha(int x){
    if(x==0) return;
    cout<<"haha"<<endl;
    haha(x-1);
}

int main(){
    haha(2); //the argument is the no of iterations we want
    return 0;
}