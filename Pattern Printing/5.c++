/*
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j << " ";
		}
		cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}