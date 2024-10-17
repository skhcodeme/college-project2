#include<iostream>
#include<limits.h>
using namespace std;

int main ()
{
/*	char c = 32;
	
	cout<<c;
	char b = 128;

	cout<<(int)b<<endl;
	char d = 255;
	cout<<(int)d;*/
	
	wchar_t ch = L'ab';
	wcout<<ch<<sizeof(ch);
	
	return 0;
}
