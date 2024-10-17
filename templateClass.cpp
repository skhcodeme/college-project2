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
	
	
	cout<< intAdder.add(3,4) <<endl;

	Adder <double> doubleAdder;
	cout<< doubleAdder.add(2.5,1.5)<<endl;
	
	Adder<string> stringAdder;
	cout<< stringAdder.add(("sahil ") ,("khan")) <<endl;
	return 0;
}
