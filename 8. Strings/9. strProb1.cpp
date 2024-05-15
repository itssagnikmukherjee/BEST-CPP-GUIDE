// I/P a string and return how many no of times the neighbouring chars are different from each other

#include <bits/stdc++.h>

using namespace std;

int main(){

    string str = "ABBCCCDDEFGHIUUU";
    int count = 0;
    int size = str.length();
    for(int i=0;str[i]!='\0';i++){
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
        else if(i==size-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}