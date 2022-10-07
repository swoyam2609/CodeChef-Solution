#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr,g;
	    for(int i=0;i<n;i++){
	        int v;
	        cin>>v;
	        arr.push_back(v);
	    }
	    int sum=1,flag=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]>arr[i-1]){
	            if(flag==-1){
	                flag=1;
	                g.push_back(sum);
	                sum=2;
	                flag=1;
	            }
	            else{
	                sum++;
	                flag=1;
	            }
	                
	        }
	        else{
	            if(flag==1){
	                flag=-1;
	                g.push_back(sum);
	                sum=2;
	                flag=-1;
	            }
	            else{
	                sum++;
	                flag=-1;
	            }
	        }
	    }
	    if(sum>1)
	        g.push_back(sum);
	    for(int i=0;i<g.size();i++){
	        g[i]-=2;
	        //cout<<g[i]<<" ";
	    }
	    int ans=0;
	    for(int i=0;i<g.size();i++)
	        ans^=g[i];
	   if(ans==0)
	        cout<<"Bob\n";
	   else 
	        cout<<"Alice\n";
	}
	return 0;
}
