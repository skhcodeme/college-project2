#include<iostream>
using namespace std;

struct employee{
int id;
char name[50];
int age;
double salary;	
};   

int main(){
	
employee employee1;
employee1.id = 22068; 
employee1.name[20]="buturab";
employee1.age = 25;
employee1.salary = 40000;

cout<<"Employee id is : "<<employee.id<<endl;
cout<<"Employee name is : "<<employee.name<<endl;	
cout<<"Employee id is : "<<employee.age<<endl;
cout<<"Employee id is : "<<employee.salary<<endl;	

return 0;
}
