#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n,k;
	    cin>>n>>k;
	    int c=0,d=5;
	    while (k>d){
	        c++;
	        k=k-5;
	    }
	    int e;
	    if(n%5==0){
	        e=n/5-1;
	    }
	    else{
	        e=n/5;
	    }
	    cout<<e-c<<endl;
	}
	return 0;
}