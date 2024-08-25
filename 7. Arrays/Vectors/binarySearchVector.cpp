#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(const vector<int> & v){
  cout<<" Your elements are: "<<endl;
  for(auto i : v){
    cout<<i<<" ";
  }
  cout<<endl;
}

void scanVector(vector<int>& v) {
    cout << "Enter elements: ";
    while (true) {
        int x;
        cin >> x;
        if (x == -1) break;
        v.push_back(x);
    }
}

int binarysearch(vector<int> & v){
  int target;
  cout<<"Enter target : ";
  cin>>target;
  int low = 0,high = v.size()-1;
  while (low <= high) {
          int mid = low + (high - low) / 2;
          if (v[mid] == target) {
              return mid;
          } else if (v[mid] < target) {
              low = mid + 1;
          } else {
              high = mid - 1;
          }
      }
      return -1;
}


int main(){
vector <int> v;  
scanVector(v);
printVector(v);
cout<<"target present at idx no : "<<binarysearch(v);
}
