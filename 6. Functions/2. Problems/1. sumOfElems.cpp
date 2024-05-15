// PROGRAM TO CALCULATE THE SUM OF ALL ELEMS OF AN ARRAY
// USING FUNCTIONS

#include<bits/stdc++.h>
using namespace std;

// function to display elems of an array

void display(int *arr,int s){
    cout<<"Your array is : ";
    for (int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}

// function to display sum of all elems of an array

int sumElem(int *arr,int s){
    int sum = 0;
    for (int i = 0;i < s;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    
    int arr[]={1,2,3,4,5,6,7};// defining an array 
    int s = sizeof(arr)/sizeof(int);
    display(arr,s); //calling the display function

    cout<<"The sum of all elems is : "<<sumElem(arr,s); //calling the sum function

return 0;
}