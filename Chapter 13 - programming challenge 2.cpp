//Rodrigo Ribeiro Leite - Chapter 13 Programming Challenges: 2, 6, 7, 11

#include <iostream>
#include <string>
using namespace std;

void selectionSort(string[], int);
void displayArray(const string[], int);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", 
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                                "Taylor, Terri", "Johnson, Jill", 
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                                "James, Jean", "Weaver, Jim", "Pore, Bob", 
                                "Rutherford, Greg", "Javens, Renee", 
                                "Harrison, Rose", "Setzer, Cathy", 
                                "Pike, Gordon", "Holland, Beth"};

    cout << "Unsorted names:" << endl;
    displayArray(names, NUM_NAMES);

    // Sort the array
    selectionSort(names, NUM_NAMES);

    cout << "\nSorted names:" << endl;
    displayArray(names, NUM_NAMES);

    return 0;
}

void selectionSort(string array[], int size) {
    int minIndex;
    string minValue;

    for (int start = 0; start < size - 1; start++) {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

void displayArray(const string array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
}
