#include <iostream>
using namespace std;

int main() {
    long long base, exponent, modulus, result = 1;
    cout << "Enter base, exponent and modulus: ";
    cin >> base >> exponent >> modulus;

    base = base % modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        exponent = exponent / 2;
        base = (base * base) % modulus;
    }

    cout << "Result: " << result << endl;
    return 0;
}
