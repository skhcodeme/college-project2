#include <iostream>
using namespace std;
 struct polynomialTerm{
 	int a, b, c;
 };
 
 int main(){
 polynomialTerm p1, p2,sum;
 
 cout<<"Enter the first Polynomial";
 cin>>p1.a>>p1.b>>p1.c; 
  
  cout<<"Enter the second polynomial";
  cin>>p2.a>>p2.b>>p2.c;
  
  sum.a = p1.a + p2.b;
  sum.b = p1.b + p2.b;
  sum.c = p1.c + p2.c;
  
  
  cout<<"Sum of the Polynomial "<<sum.a<<"x^2 + "<<sum.b<<"x + "<<sum.c<<endl;	
 	
 	
 	
 }
