#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int accounts[], int size, int accountNumber) {
    int first = 0, last = size - 1, middle;
    while (first <= last) {
        middle = (first + last) / 2;
        if (accounts[middle] == accountNumber)
            return true;
        else if (accounts[middle] > accountNumber)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return false;
}

void selectionSort(int array[], int size) {
    for (int start = 0; start < size - 1; start++) {
        int minIndex = start, minValue = array[start];
        for (int i = start + 1; i < size; i++) {
            if (array[i] < minValue) {
                minValue = array[i];
                minIndex = i;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

int main() {
    const int SIZE = 18;
    int accounts[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                          8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
                          1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    int accountNumber;
    selectionSort(accounts, SIZE);

    cout << "Enter your account number: ";
    cin >> accountNumber;

    if (binarySearch(accounts, SIZE, accountNumber))
        cout << "The account number is valid.\n";
    else
        cout << "The account number is not valid.\n";
    return 0;
}
