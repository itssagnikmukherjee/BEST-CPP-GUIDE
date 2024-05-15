/* WAP to find out the nature of the triangle 

Equilateral -----> 3 sides are equal
Isoscales   -----> 2 sides are equal
Scalene     -----> No sides are equal

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int a,b,c;
 cout<<"Enter length of side 1 : ";
 cin>>a;
 cout<<"Enter length of side 2 : ";
 cin>>b;
 cout<<"Enter length of side 3 : ";
 cin>>c;   

//  First we need to check whether all sides are non zeros or not

if(a>0 && b>0 && c>0){
//  then we need to check whether triangle can be formed or not
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c && c==a) cout<<"Equilateral Triangle";
        else if(a==b || b==c || c==a) cout<<"Isoscales Triangle";
        else cout<<"Scalene Triangle";
    }else{
        cout<<"Triangle can't be formed";
    }
}else{
    cout<<"Invalid Input";
}

return 0;
}