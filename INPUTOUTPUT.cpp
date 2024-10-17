#include<iostream>
using namespace std;

int main()
{
char name[50];

cout<<"enter the name \n";
cin.getline(name,50);
int age;
cout<<"enter the age \n";
cin>>age;	
cout<<"Name is "<<name<<" age is"<<age;
return 0;
}
