#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    if(x>=(n+1)/2)x=n-x+1;
	    if(y>=(n+1)/2)y=n-y+1;

	    int min=x>y?y:x;
	    int res=(n-1)*3+(min-1)*2;
	    cout<<res<<endl;
	}
	return 0;
}
