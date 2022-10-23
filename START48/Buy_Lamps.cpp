#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  int a,b,c,d,e;
	  cin>>a>>b>>c>>d;
	  if(c<d)
	  {
	      cout<<c*a<<endl;
	  }
	  else
	  {
	      cout<<(c*b)+d*(a-b)<<endl;
	  }
	}
	return 0;
}