#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 70) {
        cout << "Grade: A";
    } else if (score >= 60) {
        cout << "Grade: B";
    } else if (score >= 50) {
        cout << "Grade: C";
    } else {
        cout << "Grade: F";
    }

    return 0;
}
