#include<bits/stdc++.h>
using namespace std;
// here's the first program 
// to find the avg of 5 numbers
int main(){
    int a,b,c,d,e;
    cout<<"Enter first no : ";
    cin>>a; // "cin" takes input and stores the value in integer a
    cout<<"Enter second no : ";
    cin>>b; // "cin" takes input and stores the value in integer b
    cout<<"Enter third no : ";
    cin>>c; // "cin" takes input and stores the value in integer c
    cout<<"Enter forth no : ";
    cin>>d; // "cin" takes input and stores the value in integer d
    cout<<"Enter fifth no : ";
    cin>>e; // "cin" takes input and stores the value in integer e
    int avg = (a+b+c+d+e)/5; // avg stores the value of average
    cout<<"average is : "<<avg<<endl; //prints the avg value
return 0;
}