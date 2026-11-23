#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) n = -n;   // ignore the minus sign

    int count = 0;

    if (n == 0) {
        count = 1;       // 0 has one digit
    }

    while (n > 0) {
        n = n / 10;      // remove the last digit
        count++;
    }

    cout << count << endl;

    return 0;
}