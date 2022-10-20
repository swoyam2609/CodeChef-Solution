#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pi pair<int,int>
#define ff first
#define ss second
#define vi vector<int>


vector<pi> ans;
    
void swap(int s, int e, vi &a){
    if(s==e) return;
    ans.push_back({s,e});
    int v=a[s];
    a[s]=a[e];
    a[e]=v;
}

void solve(){
    int n;cin>>n;
    vi a(n);
    int mn;
    int ix;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>0;i--){
        mn=i;
        ix=i;
        for(int j=i-1;j>=0;j--){
            if(a[j]>mn){
                ix=j;
                break;
            }
        }
        int x=ix-1;
        while(1){
            if(x==-1) break;
            if(x==0 || a[x]<a[x-1]){
                if(a[x]>a[i]){
                    swap(x,i,a);
                    x=ix-1;
                    continue;
                }
                else {
                    if(x+1!=ix) 
                    {
                        swap(x+1,i,a);
                        x=ix-1;
                        continue;
                    }
                }
                break;
            }
            if(a[x]<a[i]){
                if(x+1!=ix) {
                    swap(x+1,i,a),x=ix-1;
                    continue;
                }
                break;
            }
            x--;
        }
        swap(ix,i,a);      
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.ff+1<<" "<<i.ss+1<<endl;
    // for(int i:a) cout<<i<<" ";cout<<endl;
    ans.clear();
}

int32_t main() {
    int t;cin>>t;while(t--){
        solve();
    }
	return 0;
}