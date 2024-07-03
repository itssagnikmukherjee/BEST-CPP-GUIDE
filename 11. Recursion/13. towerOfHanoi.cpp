// WAP to implement Tower Of Hanoi

#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, char st_rod='A', char mid_rod='B', char ed_rod='C'){
    if(n==0) return;
    hanoi(n-1,st_rod,ed_rod,mid_rod);
    cout<<st_rod<<" -> "<<ed_rod<<endl;
    hanoi(n-1,mid_rod,st_rod,ed_rod);
}


int main(){
    hanoi(3);
    return 0;
}