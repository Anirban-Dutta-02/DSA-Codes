/*
    ********
    ***  ***
    **    **
    *      *
    *      *
    **    **
    ***  ***
    ********
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++)
	{
	   // char m=ch-i;
	    for(int j=1;j<=n-i+1;j++)
	    {
	         cout << "*";
	    }
	    for(int j=1;j<=2*(i-1);j++)
	    {
	         cout << " ";
	    }
	    for(int j=1;j<=n-i+1;j++)
	    {
	         cout << "*";
	    }
	    
	    cout << "\n";
	}
	for(int i=n;i>0;i--)
	{
	    for(int j=1;j<=n-i+1;j++)
	    {
	         cout << "*";
	    }
	    for(int j=1;j<=2*(i-1);j++)
	    {
	         cout << " ";
	    }
	    for(int j=1;j<=n-i+1;j++)
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