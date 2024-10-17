#include <iostream>
#include <string>

using namespace std;

struct student {
    int rollNo;
    string department;
    string address;
    string name;
};

int main() {
    student stu;
    stu.name = "mohmmed sahil khan";
    stu.rollNo = 10774;
    stu.department = "BCA";
    stu.address = "ghazipur near kapoorpur colony";

    cout << "Student Name is: " << stu.name << endl;
    cout << "Student Roll Number is: " << stu.rollNo << endl;
    cout << "Student department is: " << stu.department << endl;
    cout << "Student Address is: " << stu.address << endl;

    return 0;
}

