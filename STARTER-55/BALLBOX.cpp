#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,min_req;
	    cin>>n>>k;
	    min_req=(k*(k+1))/2;
	    if(n>=min_req)
	    cout<<"Yes"<<endl;
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
