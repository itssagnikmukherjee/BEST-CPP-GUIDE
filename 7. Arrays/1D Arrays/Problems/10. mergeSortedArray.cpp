#include <bits/stdc++.h>

using namespace std;

int main(){

    // first sorted arr

    int arr[] = {1,3,5,7,10,13,40};

    // second sorted arr

    int brr[] = {2,4,6,8,9,20};

    // size of first arr

    int size1 = sizeof(arr)/sizeof(int);

    // size of second arr

    int size2 = sizeof(brr)/sizeof(int);

    // total size

    int size = size1+size2;

    int newArr[size];
    int i=0,j=0,k=0;
    
    while(i<size1 && j<size2){
        if(arr[i]<brr[j]){
            newArr[k] = arr[i];
            k++;
            i++;
        }
        else{
            newArr[k] = brr[j];
            j++;
            k++;
        }
    }

    if(i==size1){
        while(j<size2){
            newArr[k] = brr[j];
            k++;
            j++;
        }
    }else{
        while(i<size1){
            newArr[k] = arr[i];
            i++;
            k++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<newArr[i]<<" ";
    }


    return 0;
}