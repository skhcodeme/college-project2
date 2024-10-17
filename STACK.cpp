#include<iostream>
#include<stack>
using namespace std;

void explainStack(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.pop();
//st.emplace(5);
cout<<st.top()<<" ";
}


int main(){
	
explainStack();
	
return 0;	
}
