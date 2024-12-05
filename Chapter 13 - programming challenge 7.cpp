//Rodrigo Ribeiro Leite - Chapter 13 Programming Challenges: 2, 6, 7, 11

#include <iostream>
using namespace std;

template <class T>
class SimpleVector {
protected:
    T *array;
    int arraySize;

public:
    SimpleVector(int size) {
        arraySize = size;
        array = new T[size];
    }

    ~SimpleVector() {
        delete[] array;
    }

    T getElementAt(int index) const {
        if (index < 0 || index >= arraySize) {
            throw out_of_range("Index out of range");
        }
        return array[index];
    }

    int size() const { return arraySize; }
};

template <class T>
class SortableVector : public SimpleVector<T> {
public:
    SortableVector(int size) : SimpleVector<T>(size) {}

    void sort() {
        for (int i = 0; i < this->arraySize - 1; i++) {
            for (int j = i + 1; j < this->arraySize; j++) {
                if (this->array[i] > this->array[j]) {
                    swap(this->array[i], this->array[j]);
                }
            }
        }
    }
};

template <class T>
class SearchableVector : public SortableVector<T> {
public:
    SearchableVector(int size) : SortableVector<T>(size) {}

    int binarySearch(T value) {
        int first = 0, last = this->arraySize - 1, middle;
        while (first <= last) {
            middle = (first + last) / 2;
            if (this->array[middle] == value)
                return middle;
            else if (this->array[middle] > value)
                last = middle - 1;
            else
                first = middle + 1;
        }
        return -1; 
    }

    void sortAndSearch(T value) {
        this->sort();
        int result = binarySearch(value);
        if (result != -1) {
            cout << "Value found at index: " << result << endl;
        } else {
            cout << "Value not found" << endl;
        }
    }
};

int main() {
    const int SIZE = 10;
    SearchableVector<int> myVector(SIZE);
    int testArray[SIZE] = {9, 2, 5, 1, 4, 8, 6, 3, 7, 0};

    for (int i = 0; i < SIZE; i++) {
        myVector.array[i] = testArray[i];
    }

    myVector.sortAndSearch(5);

    return 0;
}
