// WAP to find out the no of vowels in a string

#include <bits/stdc++.h>

using namespace std;

int main(){

    
    string S;
    cout<<"Enter the sentence / word : ";
    getline(cin,S);

    int noOfVowels = 0;
    int noOfCons = 0;
    int noOfSpaces = 0;
    
    for(int i=0;S[i]!='\0';i++){
        if(S[i]=='a' || S[i]=='e'||S[i]=='i'|| S[i]=='o' || S[i]=='u' || S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U'){
            noOfVowels++;
        }
        else if(S[i]==' '){
            noOfSpaces++;
        }
        else{
            noOfCons++;
        }
    }


    cout<<"Total no of vowels is : "<<noOfVowels<<endl;
    cout<<"Total no of consonants is : "<<noOfCons<<endl;
    cout<<"Total no of spaces is : "<<noOfSpaces<<endl;

    return 0;
}