#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int a=y-x,res=a/8;
	    if(a%8==0)cout<<res<<endl;
	    else cout<<(res+1)<<endl;
	}
	return 0;
}
