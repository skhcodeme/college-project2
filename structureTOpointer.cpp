#include<iostream>
using namespace std;

struct Rectangle{
	
	int length;
	int breadth;
	
};

int main(){
struct Rectangle r ={10,5};	
	/*cout<<r.length<<endl;
	cout<<r.breadth<<endl;*/

Rectangle *p =&r;
cout<< p->length<<endl;
cout<< p->breadth<<endl;
cout<<p<<endl;
}
