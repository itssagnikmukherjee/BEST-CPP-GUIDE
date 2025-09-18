// remove a particular character from a string (recursive)
#include<bits/stdc++.h>
using namespace std;

void removeChar(string str, string original, char ch){
	if(original.size()==0){
		cout<<str;
		return;
	}
	if(original[0]==ch) removeChar(str,original.substr(1),ch);
	else removeChar(str+original[0],original.substr(1),ch);
}

int main(){
	string str = "Sagnik Mukherjee";
	string str2 = "";
	removeChar(str2,str,'a');
	return 0;
}
