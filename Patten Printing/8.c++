/*
    *******
     *****
      ***
       *
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
		    cout<< " ";
		}
		for(int j=1;j<2*i;j++)
		{
			cout<<"*";
		}
		cout << "\n";
	}
	
}

int main()
{
   nForest(4);

    return 0;
}