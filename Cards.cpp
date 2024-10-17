#include<iostream>

using namespace std;

struct card{
 int face;
 int shape;
 int color;		
};
 
 int main(){
  card deck[52]={{1,0,0 },{2,0,0},{1,1,0},{2,1,0}};
  
  cout<<deck[0].face<<endl;	
 	cout<<deck[3].shape<<endl;
 	cout<<deck[3].color<<endl;

 }
