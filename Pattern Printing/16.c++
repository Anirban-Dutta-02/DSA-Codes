/*
    A 
    B B 
    C C C 
    D D D D 
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	char ch='A';
	for(int i=1;i<=n;i++)
	{
	   
	    for(int j=1;j<=i;j++)
	    {
	         cout << ch << " ";
	    }
	    ch++;
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}