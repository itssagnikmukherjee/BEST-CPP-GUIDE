#include <iostream>
using namespace std;

void inputArray(int arr[][3], int rows, int cols) {
    cout << "Enter elements of the array (" << rows * cols << " elements):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}


void printArray(int arr[][3], int rows, int cols) {
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void reverseRows(int arr[], int rows, int cols){
        int i=0;
        int j=cols-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
}

void wave(int arr[][3], int rows, int cols){
    for(int k = 0;k<cols;k++){
        if(k%2!=0){
            reverseRows(arr[k],rows,cols);
        }
    }
}

int main() {
    int rows = 3, cols = 3; 
    int arr[rows][cols];
    inputArray(arr, rows, cols);
    wave(arr, rows, cols);
    printArray(arr, rows, cols);
    return 0;
}
