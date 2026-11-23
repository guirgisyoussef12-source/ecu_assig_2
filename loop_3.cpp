#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    do {
        cin >> num;
        sum += num;      // adding 0 at the end changes nothing
    } while (num != 0);

    cout << "Sum = " << sum << endl;

    return 0;
}