#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int randomNumber = rand();

    bool isEven = (randomNumber % 2 == 0);

    cout << " ";
    int userGuess;
    cin >> userGuess;


    if (userGuess == isEven) {
        cout << "TRUUEEEE" << endl;
    } else {
        cout << "eRRORRRRRRRR" << endl;
    }

    return 0;
}
// FSE 1 ID230055 Azamat Eshqo'ziyev
// 22th problem