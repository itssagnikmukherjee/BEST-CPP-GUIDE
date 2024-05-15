#include <iostream>
using namespace std;

int main() {
    int dec;
    cout << "Enter your decimal number: ";
    cin >> dec;

    int size = 0;
    int temp = dec;

    // Calculate the number of binary digits required
    while (temp > 0) {
        size++;
        temp /= 2;
    }

    // Edge case for decimal number 0
    if (size == 0) {
        size = 1;
    }

    int bin[size]; // Use an array of the correct size
    int i = 0;

    while (dec) {
        bin[size - 1 - i] = dec % 2;
        dec /= 2;
        i++;
    }

    cout << "Binary will be: ";
    for (int i = 0; i < size; i++) {
        cout << bin[i];
    }

    return 0;
}
