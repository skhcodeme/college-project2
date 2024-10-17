#include <iostream>
#include<string.h>
using namespace std;

struct employee{
int id;
char name[50];
int age;
double salary;	
};

int main (){
employee employee1;
employee1.id=2310774;
strcpy(employee1.name,"Mohammed Sahil khan");
employee1.age=24;
employee1.salary = 50000;

cout<<"Employee Name is :"<<employee1.name<<endl;
cout<<"Employee Id is :"<<employee1.id<<endl;
cout<<"Employee Age is :"<<employee1.age<<endl;	
cout<<"Employee salary is :"<<employee1.salary<<endl;

return 0;
}
