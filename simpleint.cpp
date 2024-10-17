#include<iostream>
using namespace std;

int Simpleintrest(int p , int r , int t){
	
	return (p * r*t)/ 100 ;
	
}


int main (){
int Principle ,Rate ,Time, soodh;

Principle = 	10000;
Rate = 5 ;
Time = 2;
	
soodh= Simpleintrest(Principle , Rate ,Time) ;	
	cout<<soodh<<endl;
}
