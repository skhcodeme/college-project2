#include <iostream>
using namespace std;

int indInsertation(int arr[],int size[],int element[],int capcity[],int index[]){
if(size>=capcity){
	return -1;
}	
for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
arr[index]=element;
return 1;	
}


int main(){
int arr[100] = {23,34,67,77};
int size = 4,  element = 42,index = 3;
	
 indInsertation(arr ,size ,element, 100,index);	
 size + 1;
return 0 ;	
}
