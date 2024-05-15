/* nesting is nothing but a condition within 
another condition */

#include<bits/stdc++.h>
using namespace std;

int main(){
 int a=100,b=900,c=90;
 if(a>b){
    if(a>c){
        cout<<"a is greatest";
    }
    else{
        cout<<"c is greatest";
    }
 }
 else if(b>c){
    if(b>a){
        cout<<"b is greatest";
    }else{
        cout<<"a is greatest";
    }
 }
return 0;
}


//  We can use another approach 

#include<bits/stdc++.h>
using namespace std;

int main(){
 int a=100,b=900,c=90;
 if(a>b && a>c){
    cout<<"a is greatest";
 }else if(b>a && b>c){
    cout<<"b is greatest";
 }else{
    cout<<"c is greatest";
 }
return 0;
}