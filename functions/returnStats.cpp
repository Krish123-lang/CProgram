#include<iostream>
using namespace std;

int Sum(int n1, int n2)
{
	return n1+n2;
}

int main()
{	
	int n1,n2;
	cout<<"enter n1: ";
	cin>>n1;
	
	cout<<"enter n2: ";
	cin>>n2;

	cout<<Sum(n1,n2);
	return 0;
}