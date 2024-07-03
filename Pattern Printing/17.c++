/*
       A
      ABA
     ABCBA
    ABCDCBA
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.

	for(int i=1;i<=n;i++)
	{
	    char ch='A';
	    for(int j=1;j<=n-i;j++)
	    {
	         cout << " ";
	    }
	    int mid=(2*i)/2;
	    for(int j=1;j<2*i;j++)
	    {
	         cout << ch;
	         if(j<mid) ch++;
	         else ch--;
	    }
	    cout << "\n";
	}
}

int main()
{
   nForest(4);

    return 0;
}