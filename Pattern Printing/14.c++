/*
	A 
	A B 
	A B C 
	A B C D 
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	char ch='A';
	for(int i=1;i<=n;i++)
	{
	    char m=ch;
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