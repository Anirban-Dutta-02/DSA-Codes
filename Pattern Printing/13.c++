/*
	1 
	2 3 
	4 5 6 
	7 8 9 10 
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	int m=1;
	for(int i=1;i<=n;i++)
	{
	    
	    for(int j=1;j<=i;j++)
	    {
	         cout << m++ << " ";
	    }
	    
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}