#include<bits/stdc++.h>
using namespace std;

void display(int *arr, int size, int idx){
	if(idx==size) return;
	cout<<arr[idx]<<endl;
	display(arr,size,idx+1);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(int);
	display(arr,size,0);
	return 0;
}
