#include <iostream>
using namespace std;

void BubbleSort(int *arr, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] == 0) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void display(int *arr, int size){
    cout << "\nYour array is : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {5,0,1,2,0,0,4,0,3};
    int size = sizeof(arr) / sizeof(int);
    display(arr,size);
    BubbleSort(arr, size);
    display(arr,size);
    return 0;
}
