#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
const int mod=1e9+7;
#define ll long long
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
int T,n,m,a[maxn];ll ans;
int main(){
	T=read();
	while(T--){
		n=read();ans=0;
		for(int i=1;i<=n;i++)a[i]=read();
		for(int i=n;i>1;i--)if(a[i]>0)
			a[i-1]-=a[i]/2,a[i]&=1;
		for(int i=n;i>1;i--)if(a[i]==1&&a[i-1]>0)
			a[i]=-1,a[i-1]--;
		for(int i=1;i<=n;i++)ans+=abs(a[i]);
		printf("%lld\n",ans);
	}
	return 0;
}