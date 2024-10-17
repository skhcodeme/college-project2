#include<iostream>
#include<map>
using namespace std;

void explainMultimap(){
/* everty thing same as map but its store duplicate Key;
*/

}

void explainUnorderedMap(){
// it will not store sorted only store unique and unsorted key
//  the diiference b/w map , map works on log n time and unorderded map works on constatnt time O(1)	
bool comp(pair<int,int>p1,pair<int,int>p2){
	if(p1.second < p2.second){
	return true;
	}else if (p1.second == p2.second){
		if(p1.first>p2.second) return true;
	}
	return false;
}	
}
