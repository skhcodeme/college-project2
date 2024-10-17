#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
	char height;
}r2; // you can  declare variable here and thats variable also acess in every fn 

struct Rectangle r1; // you can  declare variable here and thats variable also acess in every fn 


int main(){
	
	cout<<sizeof(r1);
}
