// WAP to input a string of even length and reverse the first half of the string

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cout<<"Enter your string (even length) : ";
    getline(cin,str);
    int len = str.length();
    reverse(str.begin()+0,str.begin()+(len/2));

    cout<<"The reversed string is : "<<str;
    

    return 0;
}