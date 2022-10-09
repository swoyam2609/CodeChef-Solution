#include <iostream>
using namespace std;

void test(){
    float a,x,b,y;
    cin>>a>>x>>b>>y;
    if( a/x>b/y ) cout<<"Alice"<<endl;
    else if(a/x == b/y) cout<<"Equal"<<endl;
    else cout<<"Bob"<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    test();
	}
	return 0;
}