#include <iostream>
using namespace std;
int main() {
    double a;
    cout << "weight: ";
    cin >> a;

    if (a <= 0) {
        cout << "Error" << endl;
    } else {
        int cost;
        switch (static_cast<int>(a)) {
            case 1:
                cost = 3500;
                break;
            case 2:
            case 3:
                cost = 5500;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                cost = 8500;
                break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                cost = 10500;
                break;
            default:
                cout << "The package cannot be shipped." << endl;
                return 0;
        }
        cout << "Shipping cost: " << cost << " som" << endl;
    }

    return 0;
}
// FSE 1 ID230055 Azamat Eshqo'ziyev
// 19th problem