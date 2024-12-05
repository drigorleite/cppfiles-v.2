#include <iostream>
using namespace std;


bool isWinner(int tickets[], int size, int winningNumber) {
    for (int i = 0; i < size; i++) {
        if (tickets[i] == winningNumber)
        return true;
    }
    return false;
}


int main() {
    const int size = 10;
    int tickets[size] = {13579, 26791, 26792, 33445, 55555, 
                         62483, 77777, 79422, 85647, 93121};

    int winningNumber;
    cout << "Enter this week's winning number: ";
    cin >> winningNumber; 

    if (isWinner(tickets, size, winningNumber))
        cout << "Congratulations! You have winning tickets!";
    else
        cout << "Sorry, no winning ticket this week";
    
    return 0;
}

