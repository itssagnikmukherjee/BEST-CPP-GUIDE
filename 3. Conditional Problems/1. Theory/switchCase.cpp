/*
SWTICH case is just a shorthand of conditional ladder
it's not used widely
*/

// Ex: Heres a program that gives the output as per the week day index is given

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    switch(num){
        case 1: cout<<"Sun"; // if num is 1 then print Sun
        break; // we need to put a break else remaining parts will also be executed
        case 2: cout<<"Mon";
        break;
        case 3: cout<<"Tue";
        break;
        case 4: cout<<"Wed";
        break;
        case 5: cout<<"Thu";
        break;
        case 6: cout<<"Fri";
        break;
        case 7: cout<<"Sat";
        default: cout<<"Wrong input"; // if the value of num isn't in the cases
    }
return 0;
}