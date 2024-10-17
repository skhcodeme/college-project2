#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle() {
        cout << "Constructor called: Rectangle created with default values" << endl;
    }

    Rectangle(int w, int h) {
        cout << "Constructor called: Rectangle created with width " << w << " and height " << h << endl;
    }
};

int main() {
    Rectangle rect1; // Creating a Rectangle object with default constructor
    Rectangle rect2(5, 6); // Creating a Rectangle object with parameterized constructor
    return 0;
}

