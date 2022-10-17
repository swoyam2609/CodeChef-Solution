#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int minute = n*60;
	    cout<<(minute/20)<<endl;
	}
	return 0;
}
