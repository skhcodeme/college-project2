#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
ofstream file("simple.txt");

file<<" abey apna kaam kr na  kyu maar khana chahta hain haule";
file.close();

ifstream readfile("simple.txt");

string content;
getline(readfile,content);
cout<<content<<endl;
readfile.close();
return 0;
}
