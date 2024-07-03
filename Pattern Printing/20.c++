/*
    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++)
	{
	   // char m=ch-i;
	    for(int j=1;j<=i;j++)
	    {
	         cout << "*";
	    }
	    for(int j=1;j<=2*(n-i);j++)
	    {
	         cout << " ";
	    }
	    for(int j=1;j<=i;j++)
	    {
	         cout << "*";
	    }
	    
	    cout << "\n";
	}
	for(int i=n-1;i>0;i--)
	{
	    for(int j=1;j<=i;j++)
	    {
	         cout << "*";
	    }
	    for(int j=1;j<=2*(n-i);j++)
	    {
	         cout << " ";
	    }
	    for(int j=1;j<=i;j++)
	    {
	         cout << "*";
	    }
	    
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}