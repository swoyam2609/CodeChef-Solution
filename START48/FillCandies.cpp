#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k, m;
	    cin>>n>>k>>m;
	    
	    int remain = n%(k*m);
	    int bags = n/(k*m);
	    
	    if(remain == 0){
	        cout<<bags<<endl;
	    }
	    else{
	        cout<<bags + 1<<endl;
	    }
	}
	return 0;
}
