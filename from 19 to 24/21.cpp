#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter the month number: ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "January 1 - New Year's Day" << endl;
            break;
        case 3:
            cout << "March 8 - International Women's Day" << endl;
            break;
        case 9:
            cout << "September 1 - Independence Day" << endl;
            break;
        case 10:
            cout << "October 1 - Teachers' and Mentors' Day" << endl;
            break;
        case 12:
            cout << "December 8 - Constitution Day" << endl;
            break;
        default:
            cout << "No national holiday in this month." << endl;
            break;
    }

    return 0;
}
// FSE 1 ID230055 Azamat Eshqo'ziyev
// 21th problem