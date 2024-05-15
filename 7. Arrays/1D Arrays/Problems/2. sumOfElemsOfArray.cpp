// PROGRAM TO CALCULATE THE SUM OF ALL ELEMS OF AN ARRAY

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[]={1,2,3,4,5,6,7};// defining an array 
    int size = sizeof(arr)/sizeof(int);

    int sum = 0; //sum will be stored here

    for(int i=0;i<size;i++){
        sum += arr[i];
    }


    cout<<"Your array is : ";
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"The sum of all elems of array is : "<<sum;

return 0;
}