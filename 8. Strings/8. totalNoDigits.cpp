// WAP TO COUNT TOTAL NO OF DIGITS OF A NUMBER WITHOUT USING ANY LOOP

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    string Snum = to_string(num);
    cout<<"Total no of digits are : "<<Snum.length();
    return 0;
}