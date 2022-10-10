#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((a*b)%4==0)
	    cout<<(a*b)/4<<endl;
	    else
	    cout<<(a*b)/4+1<<endl;
	}
	return 0;
}
