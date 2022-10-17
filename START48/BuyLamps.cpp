#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k, x, y;
	    cin>>n>>k>>x>>y;
	    
	    int z = n-k;
	    
	    if(x<y){
	        cout<<k*x + z*x<<endl;
	    }
	    else{
	        cout<<k*x + z*y<<endl;
	    }
	}
	return 0;
}
