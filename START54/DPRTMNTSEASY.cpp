#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<vector<int>> adj(n);
	    for(int i=0;i<k;i++){
	        int u,v;
	        cin>>u>>v;
	        adj[u-1].push_back(v-1);
	        adj[v-1].push_back(u-1);
	    }
    	    if (k == n * (n - 1) / 2) {
          cout << 1 << '\n';
          for (int i = 0; i < n; i++) {
            cout << 1 << ' ';
          }
          cout << '\n';
          cout << 1 << '\n';
          continue;
         }
	    vector<int>adjsize(n);
	    for(int i=0;i<n;i++)
	    adjsize[i]=(int)adj[i].size();
	    set<int> head;
	    for(int i=0;i<n;i++)
	    {
	        for(int j : adj[i])
	            if(adjsize[i]>adjsize[j])
	            head.insert(i);
	    }
	    vector<int>dept(n);
	    int curdept=1;
	    for(int i:head)
	    {
	        dept[i]=curdept;
	         for(int j:adj[i])
	         {
	             if(head.find(j)==head.end())
	             dept[j]=curdept;
	         }
	         curdept++;
	    }
	    cout<<curdept-1<<endl;
	    for(int i=0;i<n;i++)
	    cout<<dept[i]<<' ';
	    cout<<endl;
	    vector<int>dpthead(curdept);
	    for(int i: head)
	    dpthead[dept[i]]=i+1;
	    for(int i=1;i<curdept;i++)
	    cout<<dpthead[i]<<' ';
	    cout <<endl;
	}
	return 0;
}
