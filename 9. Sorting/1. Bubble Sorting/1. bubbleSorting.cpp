#include <iostream>
using namespace std;

void BubbleSort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
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
    int arr[] = {3, 4, 57, 32, 1, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    display(arr,size);
    BubbleSort(arr, size);
    display(arr,size);
    return 0;
}
