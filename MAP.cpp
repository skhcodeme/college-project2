#include<iostream>
#include<map>
using namespace std; 

void explainMap(){
map<int,int> mpp1;
map<int,pair<int,int>> mpp2;
map<pair<int,int>,int> mpp3;

mpp1[1] = 2;
mpp1.insert({3,1});
mpp1.insert({2,4});
mpp3[{2,3}]= 10;

for(auto it:mpp1){
	cout<<it.first<<" "<<it.second<<endl;
}	
/*for(auto it : mpp3){
	cout<<it.first.first<<" "<<it.second.first<<" "<<it.second<<endl;
}*/	
cout<<mpp1[1]<<endl;	
cout<<mpp1[5];

auto it = find.mpp1(3);
cout<<*(it).second;

auto it = find.mpp1(5);

auto it = mpp1.lower_bound(2);
auto it = mp1.upper_bound(3);

//erase ,swap,size , empty are same 
}

int main(){
explainMap();
return 0;
}







