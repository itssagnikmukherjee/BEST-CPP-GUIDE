// WAP to sort a string in decreasing order of values associated after removal of values smaller than I

#include <bits/stdc++.h>

using namespace std;

void BubbleSort(string &str) {
    int size = str.length();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                swap(str[j],str[j+1]);
            }
        }
    }
}

void display(string str){
    cout << "\nYour string is : ";
    for (int i = 0; str[i]!='\0'; i++) {
        cout << str[i] << " ";
    }
}

int main(){

    string str = "SAGNIKMUKHERJEE";
    string str2="";
    int size = str.length();
    display(str);
    
    for (int i = 0; i < size; i++) {
            if (str[i] > 'I') {
                str2.push_back(str[i]);
        }
    }

    display(str2);

    BubbleSort(str2);

    display(str2);

    return 0;
}