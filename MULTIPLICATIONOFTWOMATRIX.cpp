#include<iostream>
#define N 50 
using namespace std;
int main ()
{
int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;

cout<<"ENter the first row and column of matrix \n";
cin>>m>>n;
cout<<"enter the element \n";
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	
		
		
		cin>>a[i][j];
	}	
} 	

cout<<"enter the second row and column \n";
cin>>p>>q;
cout<<"enter the element\n";
for(i=0;i<p;i++)	
{
for(j=0; j<q;j++)
  {
  	
 cin>>b[i][j];
	}	
}	

cout<<"the first matrix is :\n ";
for(int i = 0 ; i<m; i++)
{
	for(int j = 0; j<n; j++)
	{
		cout<<"\t"<<a[i][j];
	}
	cout<<endl;
}

cout<<"the second matrix is :\n";
for(int i  = 0 ; i<p ; i++)
{
	for(int j = 0; j<q; j++)
	{
	cout<<"\t"<<b[i][j];	
	}
	cout<<endl;	
}	
	cout<<"multiplication of matrix is : \n";
if(n != p)
{
	cout<<"can not multiply \n";
}else
{
for(int i = 0; i<m; i++)
{
	for(int j = 0; j<p; j++)
	{
	for(int k= 0; k<n; k++)
	{
		sum = sum + a[i][k] * b[i][k];
	}	
	c[i][j]=sum;
	cout<<c[i][j]<<" ";
	}
	cout<<endl;
}	
	
	
}	
	
	
	
	
}
