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

/*
Plus Equals: 15
Minus Equals: 11
Multiplication Equals: 44
Division Equals: 11
Modulus Equals: 3
AND Equals: 0
OR Equals: 4
XOR Equals: 0
OR Equals: 4
>> Equals: 0
>> Equals: 0
*/
