// PROGRAM TO COUNT THE ODD AND EVEN NUMBERS IN AN ARRAY

#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5,6,7};// defining an array 

    int size = sizeof(arr)/sizeof(int);

    cout<<"Your array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int oddCount = 0; //counts the odd elems
    int evenCount = 0; // counts the even elems

    for(int i=0;i<size;i++){
        if(arr[i]%2==0) evenCount++;
        else oddCount++;
    }
    cout<<endl;

    cout<<"Total no of even elems : "<<evenCount<<endl;
    cout<<"Total no of odd elems : "<<oddCount<<endl;


return 0;
}