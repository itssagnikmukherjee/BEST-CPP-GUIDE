// wap to display this following pyramid


    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

// explanation

// ----    1       
// ---     12           1
// --  +   123     +    21
// -       1234         321
//         12345        4321



#include <bits/stdc++.h>

using namespace std;

int main(){

    int row;
    cout<<"Enter the no of row : ";
    cin>>row;

    for(int i=1;i<=row;i++){
        
        // for the space
        for(int j=row-1;j>=i;j--){
            cout<<" ";
        }
        
        // for the first triangle
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // for the second triangle
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
    }
    

    return 0;
}