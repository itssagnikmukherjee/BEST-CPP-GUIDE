// SORTING A STRING

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "sSAagnik"; //lexographical orderwise sorting (as per ASCII values)
    sort(str.begin(),str.end());

    cout<<str;

    return 0;
}