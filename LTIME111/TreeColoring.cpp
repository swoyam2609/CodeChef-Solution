#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
const int mod=1e9+7;
#define inf 1e9
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
int n,C,ans;
#define pb push_back
vector<int>G[maxn];
inline void dfs(int x,int fa){
	int now=C-2+(x==1);
	for(auto t:G[x])if(t^fa)
		ans=1ll*ans*now%mod,--now,dfs(t,x);
}
int main(){
	n=read(),ans=C=read();
	for(int i=1,x,y;i<n;i++)
		x=read(),y=read(),G[x].pb(y),G[y].pb(x);
	dfs(1,0);printf("%d\n",ans);
	return 0;
}