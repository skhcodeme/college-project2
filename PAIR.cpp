#include<iostream>
#include<utility>
using namespace std;

void explainPair(){
    pair<int,int> p1 = {1,3};  // Pehla pair
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int,int>> p2 = {1,{3,4}};  // Dusra pair with nested pair
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};  // Array of pairs
    cout<<arr[1].second<<endl;
}

int main() {
    explainPair();
    return 0;
}

