//find the maximum element in the vector using recursion

#include<bits/stdc++.h>
using namespace std;

void displayMax(vector<int> &arr, int idx, int max){
	if(idx==arr.size()){
		cout<<max;	
		return;
	}
	if(arr[idx]>max) max = arr[idx];
	displayMax(arr,idx+1,max);
}

int main(){
	vector<int> v = {1,2,6,70,8,9,10};
	displayMax(v,0,INT_MIN);
	return 0;
}
