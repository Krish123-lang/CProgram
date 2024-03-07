#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string letters[2][4] = {
	 	{ "A", "B", "C", "D" },
	  	{ "E", "F", "G", "H" }
	};
		
	string letters2[2][2][2] = {
  		{
    			{ "A", "B" },
    			{ "C", "D" }
  		},
  		{
    			{ "E", "F" },
    			{ "G", "H" }
  		}
	};

	//Changing the elements
	//letters[0][0] = "Z";

	//cout<<letters[0][0]<<endl; // Z
	//cout<<letters2[0][0][0]<<endl; 

	//Looping multi-dimensional array
	string letters3[2][4] = {
  		{ "A", "B", "C", "D" },
  		{ "E", "F", "G", "H" }
	};

	for (int i = 0; i < 2; i++) {
  		for (int j = 0; j < 4; j++) {
    			cout << letters3[i][j] << "\n";
  		}
	}
	return 0;
}