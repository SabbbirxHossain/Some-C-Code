// Find GCD((Greatest Common Divisor)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }

    cout << "The GCD is: " << a << endl;

    int lcm = (a*b)/a;
    cout << "the lcm is " << lcm;
    return 0;
}

