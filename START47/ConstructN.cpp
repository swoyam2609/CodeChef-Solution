#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1 || n==3 || n==5) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
