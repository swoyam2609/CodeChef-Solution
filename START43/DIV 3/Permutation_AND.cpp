#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1){
            cout<<1<<endl;
            cout<<1<<endl;
            continue;
        }
        else if(n%2){
            cout<<-1<<endl;
            continue;
        }
        vector<int> ans(n+1);
        for(int i=n;i>=1;i--){
            if(ans[i]) continue;
            for(int j=18;j>=0;j--){
                int k=i>>j;
                if(k&1){
                    ans[i]=((int)(pow(2,j+1)-1)^i);
                    ans[((int)(pow(2,j+1)-1)^i)]=i;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++) cout<<i<<' ';
        cout<<endl;
        for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
        cout<<endl;
    }
}