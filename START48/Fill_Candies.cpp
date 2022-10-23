#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int p=n/(m*k);
	    cout<<(p*(m*k)==n ?p:p+1 )<<endl;
	  
	}
	return 0;
}
