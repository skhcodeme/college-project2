#include <iostream> 
using namespace std;

template<typename T>

class Adder{
public :

T add(T a,T b){
	
	return a+b;
}	
	
};

int main (){
	Adder <int> intAdder;
	int a , b ;
	cout<< "Enter the integer "<<endl;
     cin >> a >> b;
 cout << "sum of A + B = " << a << " + " << b << " = " << intAdder.add(a, b) << endl;

 //    cout<< "sum of A + B = "<<a <<"+"<<b<<"="<<intAdder.add(a,b)<<endl;
/*
	Adder <double> doubleAdder;
	cout<< doubleAdder.add(2.5,1.5)<<endl;
	
	Adder<string> stringAdder;
	cout<< stringAdder.add(("sahil ") ,("khan")) <<endl;*/
	return 0;
}
