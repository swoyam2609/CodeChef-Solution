#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i;
	    cin>>n;
	    vector<long long>ve(n+1,0);
	    ve[0]=1;
	    long long a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	     long long k;
	    cin>>k;
	     long long b[k];
	    for(i=0;i<k;i++)
	    {
	    cin>>b[i];
	    ve[b[i]]=1;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(ve[a[i]]==0)
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
