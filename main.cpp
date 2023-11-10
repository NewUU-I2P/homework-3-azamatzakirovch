#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    srand(time(0));
    int generatedNumber = rand() % 90 + 10;

    int userPrediction;
    cout << "Enter your prediction (a two-digit integer): ";
    cin >> userPrediction;


    int accuracy;
    if (userPrediction == generatedNumber) {
        accuracy = 100;
    } else if (userPrediction % 10 == generatedNumber % 10 || userPrediction / 10 == generatedNumber / 10) {
        accuracy = 50;
    } else {
        accuracy = 0;
    }


    cout << "Accuracy: " << accuracy << "%" << endl;

    return 0;
}

// FSE 1 ID230055 Azamat Eshqo'ziyev
// 24th problem
