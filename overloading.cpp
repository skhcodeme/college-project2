#include <iostream>
using namespace std;

// Function definition with two integer parameters
void print(int a, int b) {
    cout << "Integer values: " << a +b << endl;
}

// Function definition with two float parameters
void print(float a, float b) {
    cout << "Float values: " << a + b << endl;
}

int main() {
    // Calling the integer version of print()
    print(5, 7);

    // Calling the float version of print()
    print(3.1f, 2.5f);

    return 0;
}

