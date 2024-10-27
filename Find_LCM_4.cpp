// Find LCM (Least Common Multiple)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Calculate GCD
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;

    // Calculate LCM
    int lcm = (a * b) / gcd;

    cout << "The LCM is: " << lcm << endl;
    return 0;
}
