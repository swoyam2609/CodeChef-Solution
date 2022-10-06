#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<=25) cout<<1<<endl;
	    else if(n%25==0) cout<<(n/25)<<endl;
	    else if(n%25<25) cout<<((n/25)+1)<<endl;
	}
	return 0;
}
