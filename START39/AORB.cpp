#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int a=500-(2*x)+1000-(4*(x+y));
	    int b=500-(2*(x+y))+1000-(4*y);
	    cout<<(a>b?a:b)<<endl;
	}
	return 0;
}
