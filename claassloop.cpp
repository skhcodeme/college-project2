#include<iostream>
using namespace std;

void fun(int A[] ,int n){

A[0] = 25;	
	
//	cout<<A[0]<<endl;
}

int main(){
	
int A[5] = {5,3,4,7,8};

fun(A ,5);	
	for(int i; i<5 ; i++){
		cout<<A[i]<<endl;
	}

	
}
