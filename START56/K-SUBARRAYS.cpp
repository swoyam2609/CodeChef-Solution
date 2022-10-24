#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int K;
	    cin>>K;
	    int A[N];
	    cin>>A[0];
	    int G=A[0];
	    for(int i=1;i<N;i++){
	        cin>>A[i];
	        G=gcd(A[i],G);
	    }
	    int i=0;
	    int g=0;
	    int temp=0;
	    while(i<N && temp<K){
	        g=0;
	        while(g!=G && i<N){
	            g=gcd(g,A[i]);
	            i++;
	        }
	            if(g==G)
	                temp++;
	    }
	    if(temp>=K)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	 
	}
	return 0;
}
