#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,3,4,5,5,6,6,6};
    int count = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j]){
                cout<<"Duplicates are : ";
                cout<<arr[i] <<" ";
                cout<<endl;
                count++;
            }
        }
        
    }

    cout<<"total no of duplicate elem are : "<<count;

    return 0;
}