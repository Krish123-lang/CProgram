#include<iostream>
#include<string>
using namespace std;

int main()
{
	/*
	//Getting Sizes of string
	string str1="Apple"; //5
	cout<<str1.length()<<endl; 

	string str2="A4Apple B4Ball"; //14
	cout<<str2.length()<<endl;

	string str3="Apple"; //5
	cout<<str3.size()<<endl;  
	*/

	// **********************************************************
	/*
	//Accessing Elements
	string str4="Apple";
	//cout<<str4[0]<<endl; //A

	//Changing Elements
	str4[0]='J';
	cout<<str4<<endl; //Jpple
	*/
	// **********************************************************
	
	string fullName;
	cout<<"Enter full name: ";
	//cin>>fullName;
	getline(cin, fullName);
	cout<<fullName<<endl; 

	/*
	Enter full name: krishna mandal
	krishna
	*/

	/*
	Enter full name: krishna mandal
	krishna mandal
	*/
	
	return 0;
}