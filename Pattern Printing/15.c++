/*
	A B C D 
	A B C 
	A B 
	A 
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	char ch='A';
	for(int i=n;i>0;i--)
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