#include<iostream>
using namespace std ;

int main(){
int a[2][3],i,j,sum =0;
cout<<"Enter the elements of Array"<<endl;

for(int i = 0; i<2 ; i++){
	for(int j = 0; j<3; j++){
		cin>>a[i][j];
	}
}

for(int i = 0 ; i<2 ; i++){
	for(int j = 0; j<3; j++)
	{
		cout<< a[i][j]<<" ";
	sum = sum + a[i][j];
	}
	cout<<endl;	
}

	cout<<"sum is " << sum<<endl;
	
}
