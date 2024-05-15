// print the following patt

//  1 1 1 1 1 1 1 1 1
//  1 2 2 2 2 2 2 2 1
//  1 2 3 3 3 3 3 2 1
//  1 2 3 4 4 4 3 2 1
//  1 2 3 4 5 4 3 2 1
//  1 2 3 4 4 4 3 2 1
//  1 2 3 3 3 3 3 2 1
//  1 2 2 2 2 2 2 2 1
//  1 1 1 1 1 1 1 1 1


#include<bits/stdc++.h>
using namespace std;

int main(){
 int row;
 cout<<"Enter the num of rows :";
 cin>>row;
 
 for(int i=1;i<=row;i++){ 
    for(int j=1;j<=i;j++){ 
        cout<<" "<<j;
    }
    for(int j=i;j<=row-1;j++){
        cout<<" "<<i;
    }
    for(int j=i;j<=row-1;j++){
        cout<<" "<<i;
    }
    for(int j=i-1;j>=1;j--){
        cout<<" "<<j;
    }
    cout<<endl;
 } 

  for(int i=row-1;i>=1;i--){ 
    for(int j=1;j<=i;j++){ 
        cout<<" "<<j;
    }
    for(int j=i;j<=row-1;j++){
        cout<<" "<<i;
    }
    for(int j=i;j<=row-1;j++){
        cout<<" "<<i;
    }
    for(int j=i-1;j>=1;j--){
        cout<<" "<<j;
    }
    cout<<endl;
 } 
 
return 0;
}