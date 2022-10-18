#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==c || b==d) cout<<"2"<<endl;
	    else cout<<"1"<<endl;
	}
	return 0;
}
