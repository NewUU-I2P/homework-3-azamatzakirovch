#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int cardNumber = rand() % 52;


    string rank;
    string suit;

    if (cardNumber % 13 == 0) {
        rank = "Ace";
    } else if (cardNumber % 13 == 10) {
        rank = "Jack";
    } else if (cardNumber % 13 == 11) {
        rank = "Queen";
    } else if (cardNumber % 13 == 12) {
        rank = "King";
    } else {
        rank = to_string((cardNumber % 13) + 1);
    }

    if (cardNumber / 13 == 0) {
        suit = "Clubs";
    } else if (cardNumber / 13 == 1) {
        suit = "Diamonds";
    } else if (cardNumber / 13 == 2) {
        suit = "Hearts";
    } else {
        suit = "Spades";
    }


    cout << "The picked card is: " << rank << " of " << suit << endl;

    return 0;
}
// FSE 1 ID230055 Azamat Eshqo'ziyev
// 23th problem