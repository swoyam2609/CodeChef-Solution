#include<bits/stdc++.h>
#define poly vector<int>
#define IOS ios::sync_with_stdio(false)
#define ll long long
#define mp make_pair
#define mt make_tuple
#define pa pair < int,int >
#define fi first
#define se second
#define inf 1e9
#define mod 998244353
#define int ll
#define N 200005
using namespace std;
int n,cnt[N],siz[N],son[N];
int ans[N];
multiset<int>s,S[N];
int Ans,ansbl;
poly G[N];
int a[N];
void merge(multiset<int>&x,multiset<int>&y)
{
	if (x.size()>y.size()) x.swap(y);
	for (auto u:x) y.insert(u);
	multiset<int>().swap(x);
}
void dfs(int k,int fa)
{
	bool bl=0;
	if (s.count(a[k]))
		s.erase(s.find(a[k])),bl=1;
	ans[k]=(*s.begin());
	multiset<int>s0,s1;
	int mx=0;
	for (auto u:G[k])
	{
		if (u==fa) continue;
		if (a[u]>a[k]) ansbl=1;
		dfs(u,k);
		mx=max(mx,a[u]);
	}
	for (auto u:G[k])
	{
		if (u==fa) continue;
		if (a[u]==mx) merge(S[u],s0);
		else merge(S[u],s1);
	}
	s1.insert(ans[k]);
	if (mx!=a[k])
	{
		int o=a[k]-mx-1;
		if (s1.empty())
		{
			ansbl=1;
			return;
		}
		// cout<<"?"<<o<<" "<<s1.size()<<endl;
		Ans+=mx;s1.erase(--s1.end());
		merge(s1,S[k]);
		merge(s0,S[k]);
		while (o--)
		{
			if (S[k].empty()) 
			{
				ansbl=1;
				break;
			}
			Ans+=(++mx);
			S[k].erase(--S[k].end());
		}
	} else merge(s1,S[k]),merge(s0,S[k]);
	if (bl) s.insert(a[k]);
	// cout<<k<<" "<<Ans<<" "<<S[k].size()<<endl;
}
void BellaKira()
{
	Ans=0;ansbl=0;
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=0;i<=n+1;i++) s.insert(i),cnt[i]=0;
	for (int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		// cout<<x<<" "<<i<<endl;
		G[x].push_back(i);
	}
	dfs(1,0);
	if (!ansbl)
	{
		// cout<<S[1].size()<<" "<<Ans<<endl;
		for (auto u:S[1]) Ans+=u;
		cout<<Ans<<'\n';
	} else cout<<-1<<'\n';
	s.clear();
	for (int i=1;i<=n;i++)  poly().swap(G[i]),multiset<int>().swap(S[i]);
}
signed main()
{
	IOS;
	cin.tie(0);
	int T=1;
	cin>>T;
	while (T--)
	{
		BellaKira();
	}
}
