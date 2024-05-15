// WAP to find out square root of a number if the no is not a perfect square then return the floor value

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x = 226; //input
    int low = 0;
    int high = x;
    while(low<=x){
        int mid = (low+high)/2;
        if(mid*mid==x){
            cout<<mid;
            break;
        }
        else if(mid*mid>x) high = mid--; 
        else low = mid++; 
    }
    return 0;
}