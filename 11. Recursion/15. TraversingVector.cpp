#include<bits/stdc++.h>
using namespace std;

void displayVector(vector<int> &arr, int idx){
	if(idx==arr.size()) return;
	cout<<arr[idx]<<endl;
	displayVector(arr,idx+1);
}

int main(){
	vector<int> v = {1,2,6,7,8,9,10};
	displayVector(v,0);
	return 0;
}
