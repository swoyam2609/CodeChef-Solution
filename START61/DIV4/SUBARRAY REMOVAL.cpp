#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,a=0,b=0;
	    cin>>n;
	    int A[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        if(A[i]==0) a++;
	        else b++;
	    }
	    if(b==n)
	        cout<<b/3<<endl;
	    else if(a>b)
	        cout<<b<<endl;
        else{
            int c=a;
            b-=a;
            c=c+b/3;
            cout<<c<<endl;
        }
	}
	return 0;
}
