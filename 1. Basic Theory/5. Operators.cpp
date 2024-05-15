/* CPP operators can be classified into 5 types
|
|---- Arithmatic Operator (+ - * / %)
|---- Assignment Operator (= += -= *= /= %=)
|---- Relational Operator (> < == >= <= !=)
|---- Logical Operator (&& ||)
|---- Bitwise Operator (& | ^ ~ << >>)
|
|*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 
    cout<<2+3<<endl; // basic arithmatic operator
    
    int x=5; // 5 is assigned to x
    
    x+=10; // this means x = x + 10

    cout<<2>4<<endl; // relational operator returns boolean value 0 or 1

    cout<<1 && 1<<endl; // logical operator also returns 0 or 1

return 0;
}