#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void) {
    fstream ofile;
    ofile.open("test.txt", ios::in | ios::out | ios::app);
    for(string line; getline(ofile, line) ; ) {
        cout << line << endl;
    }
    ofile << "lawda lehsan" << endl;
    ofile.close();
    return 0;
}
