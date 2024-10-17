#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
	int calculateArea(){
		return length*breadth;
	}
};

int main(){
  	
 Rectangle r1={11,11};

Rectangle  r2 ={10,5};


r1.length = 22;
r2.breadth = 24;
cout<<"area of rectangle1 :"<<r1.calculateArea()<<endl;
cout<<"Area of Rectangle2 :"<<r2.calculateArea()<<endl;
return 0;
  	
}
