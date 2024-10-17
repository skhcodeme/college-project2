#include <iostream>
using namespace std;
template<typename T>
T add(T a, T b) {
    return a + b;
}
// this is function type of template 
int main() {
    cout << add(5, 3) <<endl;
    cout << add(3.5, 2.7) <<endl;
    cout << add(string("sahil"), string("abu"))<<endl;
    return 0;
}

