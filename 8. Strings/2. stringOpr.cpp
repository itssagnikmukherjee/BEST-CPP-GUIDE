// WAP IN CPP TO REPLACE "a" WITH ALL THE ODD INDEXES OF THE STRING

#include <bits/stdc++.h>

using namespace std;

int main(){

    int size;
    cout<<"Enter the size of your string : ";
    cin>>size;

    char str[size]; //here we are not using STL in CPP

    // STRING INPUT
    for(int i=0;i<size;i++){
        cin>>str[i];
    }

    // TO REPLACE
     for(int i=0;i<size;i++){
        if(i%2==0){
            str[i]='a';
        }
     }

    // TO PRINT
    for(int i=0;i<size;i++){
        cout<<str[i];
    }

    


    return 0;
}