#include <iostream>
using namespace std;

int main() {
    int fact;
    long long mult = 1;

    cout << "Enter the number: ";
    cin >> fact;

    // if (fact < 0) {
    //     cout << "Factorial of a negative number is not defined.";
    //     return 1;
    // }

    for(int i = 1; i <= fact; i++) {
        mult *= i;
    }

    cout << "Factorial of " << fact << " is: " << mult << endl;
    return 0;
}
