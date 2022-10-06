#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,k;
	    cin>>l>>k;
	    if(l==k){cout<<0<<endl;continue;}
	    else if(l%k==0) {cout<<0<<endl;continue;}
	    else if(l%k!=0) {cout<<1<<endl;continue;}
	}
	return 0;
}
