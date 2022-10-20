#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>b>>a;
	    if(a > b)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
