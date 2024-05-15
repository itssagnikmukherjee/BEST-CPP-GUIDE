/*
WAP to check whether a char is Uppercase or Lowercase or Special Char
We will use the concept of ASCII here
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter your char : ";
    cin>>ch;
    if(ch>=65 && ch<=90){ // to define the range
    cout<<"Uppercase";
    }else if(ch>=97 && ch<=122){
    cout<<"Lowercase";
    }else{
    cout<<"Special Character";
    }
return 0;
}
