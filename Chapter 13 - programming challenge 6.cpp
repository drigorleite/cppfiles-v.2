//Rodrigo Ribeiro Leite - Chapter 13 Programming Challenges: 2, 6, 7, 11

#include <iostream>
#include <stdexcept>
using namespace std;

class TestScores {
private:
    double *scores;
    int numScores;
    
public:
    TestScores(double arr[], int size) {
        scores = new double[size];
        numScores = size;
        for (int i = 0; i < size; i++) {
            if (arr[i] < 0 || arr[i] > 100) {
                throw invalid_argument("Test score out of range!");
            }
            scores[i] = arr[i];
        }
    }

    double getAverage() const {
        double total = 0;
        for (int i = 0; i < numScores; i++) {
            total += scores[i];
        }
        return total / numScores;
    }

    ~TestScores() {
        delete[] scores;
    }
};

int main() {
    const int SIZE = 5;
    double testScores[SIZE] = {85.5, 90.0, 88.5, 92.0, 76.5};
    
    try {
        TestScores student(testScores, SIZE);
        cout << "Average test score: " << student.getAverage() << endl;
    } catch (invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;
}
