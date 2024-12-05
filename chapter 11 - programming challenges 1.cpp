#include <iostream>
using namespace std;

bool isValid(int accounts[], int size, int accountNumber) {
    for (int i = 0; i < size; i++) {
        if (accounts[i] == accountNumber)
            return true;
    }
    return false;
}

int main() {
    const int size = 10;
    int accounts[size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                          8080152, 4562555, 5552012, 5050552};
    int accountNumber;
    cout << "Enter your account number: ";
    cin>> accountNumber; 

    if (isValid(accounts, size, accountNumber))
        cout << "Enter your account number: ";
    else
        cout << "The account number is not valid.";
    return 0;
}


