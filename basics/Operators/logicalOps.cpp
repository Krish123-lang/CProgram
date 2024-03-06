#include<iostream>
using namespace std;

int main()
{
	int x=5, y=3;
	
	//AND
	cout<<(x>2 && y<4)<<endl; //1
	cout<<(x>2 && y<2)<<endl; //0

	//OR
	cout<<(x>2 || y<1)<<endl; //1
	cout<<(x<2 || y<1)<<endl; //0
	
	//NOT
	cout<<(!(x>2 && y<1))<<endl; //1
	cout<<(!(x>2 && y<4))<<endl; //0
	
	return 0;
}