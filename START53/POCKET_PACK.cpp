#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>> v;
    vector<int> c(k),e(k);
    set<pair<int,int>> s,s2;
    for(int i = 0;i < k;i++){
        int x,y;
        cin>>x>>y>>c[i]>>e[i];
        v.push_back({x,y});
        if(x==0 and y ==0)s.insert({c[i],i});
        s2.insert({x+y,i});
    }
    while(s.size()){
        pair<int,int> p = *s.begin();
        s.erase(s.begin());
        int reach = v[p.second].first+v[p.second].second+e[p.second];
        if(reach >= n+m){
            cout<<p.first<<endl;
            return;
        }
        while(s2.size()){
            pair<int,int> p2 = *s2.begin();
            int dest = v[p2.second].first+v[p2.second].second;
            if(reach >= dest){
                s.insert({p.first+c[p2.second],p2.second});
                s2.erase(s2.begin());
            }
            else break;
        }
    }
}

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
