#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int A[3];
	    cin>>A[0]>>A[1]>>A[2];
	    int  c=0;
	    sort(A,A+3);
	    if(A[0]>=1)
	        c++;
	    if(A[1]>=1)
	        c++;
	    if(A[2]>=1)
	        c++;
	    
	    if(A[0]==2){
	        if(A[2]>=3)
	            c=c+2;
	        else
	            c++;
	    }
	    else if(A[0]>=3)
	        c=c+3;
	    else{
	        if(A[1]>1)
	            c++;
	    }
	    cout<<c<<endl;
	        
	}
	return 0;
}
