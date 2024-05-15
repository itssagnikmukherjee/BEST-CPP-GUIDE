// WAP to find out the transpose of a matrix and store it into a separate array

// INCOMPLETE

#include <bits/stdc++.h>

using namespace std;

void inputElems(int arr[][100], int row, int col) {
    cout << "Enter your elements:" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
}

void printElems(int arr[][100], int row, int col) {
    cout << "The mat is : " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout <<" "<<arr[i][j];
        }
        cout<<endl;
    }
}


void printCW(int arr[][100],int trr[][100], int row, int col){
    
    for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                 trr[j][i] = arr[i][j];
            }
        }
    
    cout<<"The transpose mat is : "<<endl;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
                 cout<<" "<<trr[i][j];
        }
        cout<<endl;
    }

    cout<<"The CW matrix is : "<<endl;

    for(int k=0;k<col;k++){
        int i = 0;
        int j = col-1;
        while(i<=j){
            int temp = trr[k][i];
            trr[k][i] = trr[k][j];
            trr[k][j] = temp;
            i++;
            i--;
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
                 cout<<" "<<trr[i][j];
        }
        cout<<endl;
    }

}

int main(){

    int row,col;

    cout<<"Enter no of rows : ";
    cin>>row;

    cout<<"Enter no of cols : ";
    cin>>col;

    // main mat

    int arr[100][100];
    inputElems(arr,row,col);
    printElems(arr,row,col);

    // transpose arr

    int trr[100][100];
    printCW(arr,trr,row,col);

    return 0;
}