// WAP in CPP to find all possible ways to go from point (a1,b1) to point (a2,b2) if only down and right movement are possible
// Also find out the paths


#include <bits/stdc++.h>

using namespace std;

int mazePath(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int downWays = mazePath(sr,sc+1,er,ec);
    int rightWays = mazePath(sr+1,sc,er,ec);
    return rightWays+downWays;
}

void printPath(int sr, int sc, int er, int ec, string s=""){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+"R");
    printPath(sr+1,sc,er,ec,s+"D");
}


int main(){
    cout<<mazePath(1,1,3,3)<<endl;
    printPath(1,1,3,3);
    return 0;
}