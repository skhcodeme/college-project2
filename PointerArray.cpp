#include<iostream>

using namespace std;

int main(){
int *p;
p = new int[5]; // this array created in heap 
p[0] = 21;
p[1] = 32;
p[2] = 33;
p[3] = 774;
p[4] = 549;

//p= A[1];
for(int i= 0; i<5;i++){
	//cout<<A[i]<<endl;
	cout<<p[i]<<endl;
}	
delete [ ]	p;
	
}

