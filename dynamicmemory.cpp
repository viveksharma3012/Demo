#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	cout<<p<<"\n";
	*p=10;
	cout<<*p<<"\n";
	delete p;
	
	p=new int[5];
	for(int i=0;i<5;i++)
	{
		*(p+i)=2*i;
	}
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<"\n";
		cout<<p+i<<"\n";
	}
	delete[]p;
	
	
	
}
