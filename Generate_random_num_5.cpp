#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int random_number = (rand() % 6)+1; // Generate a random number

    std::cout << "Random Number: " << random_number << std::endl;

    return 0;
}
