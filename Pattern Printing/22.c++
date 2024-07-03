/*
    4444444
    4333334
    4322234
    4321234
    4322234
    4333334
    4444444
*/

#include <iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=0;i<2*n-1;i++)
	{
	   // char m=ch-i;
	    for(int j=0;j<2*n-1;j++)
	    {
	        int top=i;
	        int left=j;
	        int bottom=2*n-2-i;
	        int right=2*n-2-j;
	        cout<<n-(min(min(top,bottom),min(left,right)));
	    }
	    
	    
	    cout << "\n";
	}
	
}

int main()
{
   nForest(4);

    return 0;
}