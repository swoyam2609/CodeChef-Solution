#include <iostream>
using namespace std;

void test(){
    int n,m,x;
    cin>>n>>m>>x;
    cout<<2*(n+m)*x<<endl;;
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