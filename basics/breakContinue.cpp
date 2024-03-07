#include<iostream>
using namespace std;

int main()
{	
	for(int i=0; i<=10;i++)
	{
		if (i==5)
		{
			//break;
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
/*
0
1
2
3
4
------------------------------------------------------------------
0
1
2
3
4
6
7
8
9
10
*/