#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>ind(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        ind[v[i]]=1;
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int tmp;
        cin>>tmp;
        ind[tmp]=-1;
    }
    for(int i=0;i<n;i++){
        if(ind[v[i]]!=-1){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
}
int main() {
	ll t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
