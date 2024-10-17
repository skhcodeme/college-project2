#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v(2,100);
v.insert(v.begin(),300);
v.insert(v.begin()+1,2,10);

//copy fn
vector<int> copy{2,50};
v.insert(v.begin() , copy.begin(),copy.end()); 


for(int i = 0;i<v.size();i++){
	cout<<v[i]<<" ";
}
}

