// WAP to input a length greater than 5 and rev the substr from position 2 to 5 using inbuild functions

#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cout<<"Enter your string (<5) : ";
    getline(cin,str);
    int len = str.length();
    reverse(str.begin()+1,str.begin()+5);
    cout<<"After reversing from 2nd position to 5th position : "<<str;
    return 0;
}