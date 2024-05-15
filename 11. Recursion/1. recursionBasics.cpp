// Recursion is the short form of recursive iteration
// Recursion simply means function calling function

#include <bits/stdc++.h>

using namespace std;

void hehe(){
    cout<<"Hehe";
}
void haha(){
    cout<<"Haha";
    hehe(); //here haha function is calling the hehe function
}

int main(){

    haha();
    return 0;

}