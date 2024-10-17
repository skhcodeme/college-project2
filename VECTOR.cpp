#include<iostream>
using namespace std;

void explainVector(){
vector<int> v;

v.push_back(1); // vector<int> v this is empty container push_back  fn to store in this container
v.emplace_back(2); // its dynamically increase the size {1,2} insert two element at back

vector<pair<<int,int>>vec;
v.push_back({1,2});
v.emplace_back(1,2);

vector<int>v(5,100);

vector<int>v(5); 

vent<int>::iterator it = v.begin();
it++;
cout<<*(it)<<" ";	
	
	
}
