#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int sum = x+y;
	    int diff = s - sum;
	    int diff2 = s - x;
	    if(diff >= z) cout<<"0"<<endl;
	    else if(diff2 >= z) cout<<"1"<<endl;
	    else cout<<"2"<<endl;
	}
	return 0;
}
