// WAP to print diff b/w odd idx and even idx elems

#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,20,55,6,78,1,9};
    int size = sizeof(arr)/sizeof(int);
    int oddSum = 0;
    int evenSum = 0;
    for(int i=0;i<size;i++){
        if(i%2==0) evenSum += arr[i];
        else oddSum += arr[i];
    }
    cout<<"The diff b/w odd idx and even idx elems is : "<<oddSum-evenSum;
    return 0;
}