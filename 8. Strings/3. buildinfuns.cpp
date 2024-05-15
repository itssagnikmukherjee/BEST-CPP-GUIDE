// CPP has several build in functions for string operatios
//  1. Reverse
//  2. Length
//  3. Substring
//  etc

#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"The length of your string is : "<<str.length()<<endl; // this function returns the length
    cout<<"The size of your string is : "<<str.size()<<endl; // this function returns the size

    str.push_back('A'); // we can push single char
    cout<<"After doing push back : "<<str<<endl;
    str.pop_back(); // we can pop a single char
    cout<<"After doing pop back : "<<str<<endl;

    reverse(str.begin(),str.end());

    cout<<"After reversing : "<<str;

    return 0;
}