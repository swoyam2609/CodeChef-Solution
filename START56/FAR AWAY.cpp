#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long A[n];
	    long long x;
	    cin>>x;
	    long long c=0;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        if(abs(A[i]-x)>abs(A[i]-1))
	            c+=abs(A[i]-x);
	        else
	            c+=abs(A[i]-1);
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
