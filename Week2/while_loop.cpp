#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are: ";

    while(i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}
