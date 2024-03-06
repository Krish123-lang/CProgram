#include<iostream>
#include<string>
using namespace std;

int main()
{
	/*
	string name="John Doe";
	cout<<"My name is: "<<name<<endl;
	*/

	//CONCATENATION	
	string fname;
	string lname;
	string fullname;
	
	
	cout<<"Enter first name: ";
	cin>>fname;

	cout<<"Enter last name: ";
	cin>>lname;
	
	//fullname=fname+" "+lname;
	fullname = fname.append(lname); //JohnDoe
	cout<<fullname<<endl;
	return 0;
}
//My name is: John Doe
/*
Enter first name: John
Enter last name: Doe
John Doe
*/