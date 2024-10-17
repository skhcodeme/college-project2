#include<iostream>
using namespace std;

int main()
{
int a[20],n,data;
bool found = false;
cout<<"enter the element \n";
cin>>n;
cout<<"enter the "<<n<<" element"<<endl;
for(int i = 0; i<n; i++)
{
	cin>>a[i];
}

cout<<"enter the element to search \n";
cin>>data;

for(int i = 0; i<n; i++)
{
   	if(a[i]==data)
	   {
	   	cout<<"element found "<<data<<" at index "<<i<<endl;
		}
	
}
if(  !false)
{
cout<<"element not found";	
}


return 0;
}




	

