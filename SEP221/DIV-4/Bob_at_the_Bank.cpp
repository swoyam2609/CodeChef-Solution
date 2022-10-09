#include <iostream>
using namespace std;

void test(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int sol=w+(x-y)*z;
    cout<<sol<<endl;
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