//store all the subsets of a string

#include<bits/stdc++.h>
using namespace std;

void printSubset(string ans, string original,vector<string> &v){
	if(original==""){
		v.push_back(ans);
		return;
	}
	char ch = original[0];
	printSubset(ans,original.substr(1),v);
	printSubset(ans+ch,original.substr(1),v);
}

int main(){
	vector <string> v;
	printSubset("","abc",v);
	for(string ele : v){
		cout<<ele<<endl;
	}
	return 0;
}
