#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Rainfall {
    string month;
    double amount;
};

bool compare(Rainfall a, Rainfall b) {
    return a.amount > b.amount;
}

int main() {
    const int SIZE = 12;
    Rainfall months[SIZE] = {{"January", 3.2}, {"February", 2.8}, {"March", 4.1},
                             {"April", 3.5}, {"May", 4.2}, {"June", 5.1}, 
                             {"July", 3.3}, {"August", 2.9}, {"September", 4.0}, 
                             {"October", 3.0}, {"November", 4.4}, {"December", 4.5}};
                             
    sort(months, months + SIZE, compare);

    cout << "Rainfall from highest to lowest:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << months[i].month << ": " << months[i].amount << " inches.\n";
    }
    return 0;
}
