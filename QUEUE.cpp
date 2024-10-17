#include<iostream>
#include<queue>
using namespace std;

void explainQueue(){
queue<int>	q;
q.push(1); //1
q.push(2); // 2
q.push(4); //3
q.back() +=5;
cout<<q.back()<<endl; //prints 9	
cout<<q.front()<<endl; //print 1
q.pop();
cout<<q.front();
}

int main(){
explainQueue();
	
return 0;	
}
