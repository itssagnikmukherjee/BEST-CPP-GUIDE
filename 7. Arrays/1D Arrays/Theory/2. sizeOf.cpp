// THE SIZEOF OPERATOR RETURNS THE SIZE OF A DATATYPE



#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;
    cout<<sizeof(a)<<endl; // returns 4 because 4 bytes are req to store an integer value

    int arr[] = {3,5,6,7,8};
    cout<<sizeof(arr); // returns 20 because it has 5 int elems which takes 4 bytes individually

    cout<<sizeof(arr)/sizeof(int); // returns 5 because the total sizeof arr is 20 and size of int is 4 i.e total no of elems can be found from this

return 0;
}