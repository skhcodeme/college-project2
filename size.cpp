#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main ()
{
	float a = 12.45454545f;
	double b = 20.40202402402022234;
	long double c = 20.2122445566779845222222L;
		cout<<cout.precision();
//	cout<<setprecision();
	
	cout<<"f = "<<a<<endl;
	cout<<cout.precision();

	cout<<"double= "<<b<<endl;
		cout<<cout.precision();

	cout<<"long double= "<<c<<endl;
	cout<<numeric_limits<float>::digits10<<endl;
	
	return 0;
}
