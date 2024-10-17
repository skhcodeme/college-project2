#include<iostream>
#include<climits>
using namespace std;

int main(){
int myArray[] = {5,2,4,31};
int sizeofArray = sizeof(myArray) / sizeof(int);
int max = INT_MIN;
for(int i = 0 ; i<sizeofArray ; i++){
	if(myArray[i]>max){
		max = myArray[i];
		cout<<" laregest element in Array "<<max;
	} return 1;
	
	
return 0;
}	
	
	
	
	
	
}
