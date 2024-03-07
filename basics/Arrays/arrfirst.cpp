#include<iostream>
#include<string>
using namespace std;

int main()
{
	string letters[]={"apple", "banana", "car"};

	/*
	for(int i=0;i<3;i++)
	{
		//cout<<i+1<<" = "<<letters[i]<<endl;
		cout<<i<<" = "<<letters[i]<<endl;
	}
	*/

	//------------------------

	int num1[]={10,20,30,40,50};	
	
	for(int i:num1)
	{
		cout<<i<<endl;
	}
	return 0;
}
/*
0 = apple
1 = banana
2 = car
----------------
1 = apple
2 = banana
3 = car
----------------
10
20
30
40
50
*/