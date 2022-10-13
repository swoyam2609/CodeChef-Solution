#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a<b && b==c)||(b<a && a==c)||(c<b && b==a))
	    {
	        cout<<"NO\n";
	    }
	    else if(a==b || b==c || a==c)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}