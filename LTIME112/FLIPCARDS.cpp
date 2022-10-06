#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n,a;
	    cin>>n>>x;
	    if(x==0||x==n) {cout<<"0"<<endl;continue;}
	    a=n-x;
	    if(x<a) 
	    {cout<<x<<endl;
	    continue;}
	    else cout<<a<<endl;
	}
	return 0;
}
