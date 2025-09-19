//print all the subsets of a string

#include<bits/stdc++.h>
using namespace std;

void printSubset(string ans, string original){
	if(original==""){
		cout<<ans<<endl;
		return;
	}
	char ch = original[0];
	printSubset(ans+ch,original.substr(1));
	printSubset(ans,original.substr(1));
}

int main(){
	printSubset("","abc");
	return 0;
}
