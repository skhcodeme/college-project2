#include<iostream>
#include<queue>
using namespace std;

void explainPQ(){
priority_queue<int> pq;
pq.push(5); //{5}
pq.push(2); // {5,2}
pq.push(8); //{8,5,2}        //maximum heap
pq.push(10); // {10,8,5,2}
cout<<pq.top()<<endl;	
pq.pop();
cout<<pq.top()<<endl;	
//minimum heap
priority_queue<int,vector<int>,greater<int>> pqMin;
pqMin.push(5);
pqMin.push(2);
pqMin.push(8);
pqMin.push(10);

cout<<pqMin.top();
	
}

int main(){
explainPQ();
	
return 0;
	
}
