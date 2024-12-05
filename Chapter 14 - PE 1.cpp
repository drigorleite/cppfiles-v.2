#include <iostream>
#include <string>
using namespace std;

class DayOfYear {
private:
    int day;
    static string months[12];
    static int daysInMonth[12];

public:
    DayOfYear(int d) {
        if (d >= 1 && d <= 365) {
            day = d;
        } else {
            cout << "Invalid day. Please enter a number between 1 and 365." << endl;
        }
    }

    void print();
};

string DayOfYear::months[12] = {"January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};

int DayOfYear::daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void DayOfYear::print() {
    int tempDay = day;
    int monthIndex = 0;

    while (tempDay > daysInMonth[monthIndex]) {
        tempDay -= daysInMonth[monthIndex];
        monthIndex++;
    }

    cout << months[monthIndex] << " " << tempDay << endl;
}

int main() {
    int userInput;
    cout << "Enter a day of the year (1-365): ";
    cin >> userInput;

    DayOfYear dayOfYear(userInput);
    dayOfYear.print();

    return 0;
}
