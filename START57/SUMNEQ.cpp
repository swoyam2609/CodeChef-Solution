#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x=0;
	cin>>n;
	for(int i=1,j=n-1;i<n;i++,j--)
	{
	    if(i+j==n)
	    x++;
	}
	cout<<x;
	return 0;
}
