/*
    D
    CD
    BCD
    ABCD
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
    char ch='A'+n;
	for(int i=1;i<=n;i++)
	{
	    char m=ch-i;
	    for(int j=1;j<=i;j++)
	    {
	         cout << m++;
	    }
	    
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}