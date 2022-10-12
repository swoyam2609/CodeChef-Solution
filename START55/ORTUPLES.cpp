#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t)
	{
	    long long int p,q,r;
	    cin>>p>>q>>r;
	    long long int ans=1;
	    for(int i=31;i>=0;i--)
	    {
	        int one=0,zero=0;
	        if(p&(1<<i))
	        one++;
	        else
	        zero++;
	        if(q&(1<<i))
	        one++;
	        else
	        zero++;
	        if(r&(1<<i))
	        one++;
	        else
	        zero++;
	        
	        if(one==1)
	        ans*=0;
	        else if(one==0)
	        ans*=1;
	        else if(one==2)
	        ans*=1;
	        else
	        ans*=4;
	        
	    }
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
