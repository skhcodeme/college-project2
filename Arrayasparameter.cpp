#include<iostream>
using namespace  std;


void fun(int *A , int n){
int i ;
for(i = 0; i<n; i++){
	cout<<A[i]<<endl;
}	
}

int main(){

int A[6] = {2, 3 , 4 , 5,7,9};

fun (A , 5);

}
