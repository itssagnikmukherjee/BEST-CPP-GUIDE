// WAP to find out the summation of two matrics

// The order of a matrix should be same i.e the row number and the col number of both matrix should be equal

#include <iostream>

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
            cout << arr[i][j];
        }
    }
}

void sumofElems(int arr[][100], int arr2[][100], int row, int col){
    
    cout << "The sum of mat is : " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j]+arr2[i][j];
        }
    }
}

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int arr1[100][100];
    int arr2[100][100];

    // Input for the first & second array

    inputElems(arr1, row, col);
    inputElems(arr2, row, col);

    // Print the first & second array

    printElems(arr1,row,col);
    printElems(arr2,row,col);

    // Calculate and print the sum of the matrices
    sumofElems(arr1,arr2,row,col);

    return 0;
}
