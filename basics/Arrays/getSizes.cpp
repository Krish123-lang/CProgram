#include<iostream>
#include<string>
using namespace std;

int main()
{	
	int num1[]={10,20,30,40,50};
		
	string str1[]={"apple", "ball", "car"};
	
	int intlen=sizeof(num1)/sizeof(int);
	int strlen=sizeof(str1)/sizeof(int);
	
	/*
	for(int i=0; i<intlen;i++)
	{
		cout<<num1[i]<<endl;
	}
	*/

	//--------------------------------------
	
	/*
	for(int i=0; i<strlen;i++)
	{
		cout<<str1[i]<<endl;
	}
	*/
	
	//-------------------------------------

	/*
	for(string i:str1)
	{
		cout<<i<<endl;
	}
	*/
	
	return 0;
}

/*
Output:
10
20
30
40
50
--------------------------------------------
apple
ball
car
---------------------------------------------
apple
ball
car
*/