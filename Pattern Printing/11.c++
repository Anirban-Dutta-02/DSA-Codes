/*
	1
	01
	101
	0101
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++)
	{
	    int start;
	    if(i%2==0) start=1;
	    else start=0;
	    for(int j=0;j<=i;j++)
	    {
	         cout << start;
	         start=1-start;
	    }
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}