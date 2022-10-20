#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==2){
	        cout<<1<<endl;
	        continue;
	    }
	    if(n==3){
	        cout<<2<<endl;
	        continue;
	    }
	    int sqrtofn=(int)(sqrt(n));
	    int count=0;
	    for(int i=1;i<=sqrtofn;i++){
	        if(n%i==0){
	            count+=2;
	            if(i*i==n){
	                count--;
	            }
	        }
	    }
	   
	    int ans=2*(count-1);
	     if((n&1)==0){
	        ans--;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}