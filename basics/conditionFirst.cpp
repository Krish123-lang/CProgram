#include<iostream>
using namespace std;
int main()
{
	/*
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age < 0 && age>=0 && age<=17)
	{
		cout<<"You are not mature !";
	}
	else if (age>=18 && age<=50)
	{
		cout<<"Elligble to drive !";
	}
	else if(age >=60 && age<=90)
	{
		cout<<"You need proper rest !";
	}
	else
	{
		cout<<"I salute you !";
	}
	*/

	int time = 15;
	string result = (time < 18) ? "Good day." : "Good evening.";
	cout << result; //Good day.
	return 0;
}