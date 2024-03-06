#include<iostream>
using namespace std;

int main()
{
	int x=11;
	
	x+=4;
	cout<<"Plus Equals: "<<x<<endl;

	x-=4;
	cout<<"Minus Equals: "<<x<<endl;
	
	
	x*=4;
	cout<<"Multiplication Equals: "<<x<<endl;

	
	x/=4;
	cout<<"Division Equals: "<<x<<endl;

	
	x%=4;
	cout<<"Modulus Equals: "<<x<<endl;
	
	
	x&=4;
	cout<<"AND Equals: "<<x<<endl;
	
	
	x|=4;
	cout<<"OR Equals: "<<x<<endl;
	
	
	x^=4;
	cout<<"XOR Equals: "<<x<<endl;
	
	
	x|=4;
	cout<<"OR Equals: "<<x<<endl;

	x>>=4;
	cout<<">> Equals: "<<x<<endl;
	
	x<<=4;
	cout<<">> Equals: "<<x<<endl;

	return 0;
}