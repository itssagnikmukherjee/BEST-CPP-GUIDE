// Take two strings as input and find whether they are anagrams or not

// let Str1 = SAGNIKMUKHERJEE 
// let Str2 = ERJEESAGNIMUKHK
// If we rearrange the second string the first one should be formed "these type of pairs are called anagrams" 

#include <bits/stdc++.h>

using namespace std;

int main(){

    string str1;
    string str2;
    cout<<"Enter first string : ";
    getline(cin,str1);
    cout<<"Enter second string : ";
    getline(cin,str2);
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    bool flag = false;
    if(str1.length()!=str2.length()){
        cout<<"Length of both string is not matched";
    }
    else{
        if(str1==str2){
                flag = true;
        }
    }
    if(flag==true){
        cout<<"the strings are anagrams";
    }else{
        cout<<"the strings are not anagrams";
    }
    return 0;
}