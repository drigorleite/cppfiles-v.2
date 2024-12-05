#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    double balance;
    string lastPayment;
};

void displayCustomer(const Customer& customer) {
    cout << "Name: " << customer.name << endl;
    cout << "Address: " << customer.address << endl;
    cout << "City: " << customer.city << endl;
    cout << "State: " << customer.state << endl;
    cout << "ZIP: " << customer.zip << endl;
    cout << "Phone: " << customer.phone << endl;
    cout << "Balance: $" << customer.balance << endl;
    cout << "Last Payment: " << customer.lastPayment << endl;
}

int main() {
    const int SIZE = 5;
    Customer customers[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter information for customer " << (i + 1) << ":\n";
        cout << "Name: ";
        getline(cin, customers[i].name);
        cout << "Address: ";
        getline(cin, customers[i].address);
        cout << "City: ";
        getline(cin, customers[i].city);
        cout << "State: ";
        getline(cin, customers[i].state);
        cout << "ZIP: ";
        getline(cin, customers[i].zip);
        cout << "Phone: ";
        getline(cin, customers[i].phone);
        cout << "Balance: $";
        cin >> customers[i].balance;
        cout << "Last Payment: ";
        cin.ignore();
        getline(cin, customers[i].lastPayment);
        cout << endl;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Customer " << (i + 1) << ":\n";
        displayCustomer(customers[i]);
        cout << endl;
    }
    return 0;
}
