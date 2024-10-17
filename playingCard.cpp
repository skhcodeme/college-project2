#include<iostream>
#include<stdio.h>
using namespace std;

struct card{
	int face;
	int shape;
	int color;	
};

int main(){
	
	card myCard= {1,0,0};
	cout<<"Card Details"<<endl;
	cout<<"  face : "<<myCard.face<<endl;
	cout<<" Shape : "<<myCard.shape<<endl;
	cout<<" color : "<<myCard.color<<endl;
	return 0;
}
