/*
    ****
    *  *
    *  *
    ****
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++)
	{
	   // char m=ch-i;
	    for(int j=1;j<=n;j++)
	    {
	         if(i==1 || j==1 || i==n || j==n)
	            cout << "*";
	         else
	            cout << " ";
	    }
	    
	    
	    cout << "\n";
	}
	
}

int main()
{
   nForest(4);

    return 0;
}