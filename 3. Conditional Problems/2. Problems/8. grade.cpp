/* 

WAP to assign grade according to the following table :

        Marks               Grade

        <40                 Fail
   40 to 49                  D
   50 to 59                  C
   60 to 69                  B
   70 to 79                  A
   80 to 89                  E
  90 to 100                  O

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int num;
 cout<<"Enter your no :";
 cin>>num;
 if(num<40) cout<<"Fail";
 else if(num>=40 && num<=49) cout<<"D";
 else if(num>=50 && num<=59) cout<<"C";
 else if(num>=60 && num<=69) cout<<"B";
 else if(num>=70 && num<=79) cout<<"A";
 else if(num>=80 && num<=89) cout<<"E";
 else if(num>=90 && num<=100) cout<<"O";
 else cout<<"Invalid Input";
return 0;
}