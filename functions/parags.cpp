#include<iostream>
#include<string>
using namespace std;

void greet(string name, int num1, int num2)
{
	cout<<"Hello! "<<name<<endl;
	cout<<"Sum: "<<num1+num2<<endl;
}

int main()
{
	int num1,num2;
	cout<<"Enter first number: ";
	cin>>num1;

	cout<<"Enter second number: ";
	cin>>num2;

	greet("Krishna",num1,num2);
	return 0;
}