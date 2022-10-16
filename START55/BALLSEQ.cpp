#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    //vector<int> arr(n,0);
	    int arr1[k];
	    int ans = 0;
	    for(int i = 0; i < k; i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    int j = 0;
	    while(j<k)
	    {
	        if(j == 0) ans += arr1[j] - 1;
	        else ans+= arr1[j] - arr1[j-1] - 1;
	        ans = ans/2;
	        j++;
	    }
	    
	    ans += n - arr1[k-1];
	    
	    cout<<(n-k)-__builtin_popcount(ans)<<endl;
	    
	}
	return 0;
}
