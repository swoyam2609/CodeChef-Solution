#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	int A[100000];
	cin>>t;
	while(t--){
	    cin>>n;
	    int res=1;
	    for(i=0;i<n;i++)cin>>A[i];
	    for(i=0;i<(n-1);i++){
	        if(A[i]==A[i+1])continue;
	        res++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
