/*
the do while loop is the most widely used loops 

Syntax: 

do{

    statement;
    update;

}while(condition);

do while loop ----> executes first then checks condition

while loop ---->checks condition first then executes

Ex: 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int i=11;
 do{
    cout<<i<<endl;
    i++;
 }while(i<=10);  // checks condition after first execution
return 0;
}