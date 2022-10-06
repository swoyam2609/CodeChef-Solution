#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef map<int,int> mpp;
// #define ff first
// #define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
void fast()
{
 ios_base::sync_with_stdio(0);
 ios::sync_with_stdio(0);
 cin.sync_with_stdio(0);
 cout.sync_with_stdio(0);
 cin.tie(NULL);
 cout.tie(NULL);
}
bool cmp(pi &a,pi &b)
{
    return a.second < b.second;
}
int main(){
	IOS
	fast();
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vi v(n);
	int e=0,o=0,one=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]%2==0){
			e++;
		}else{o++;}
	}
	if(o!=0){
		cout<<e<<endl;
	}else{
	    cout<<0<<endl;
	}

	}
	return 0;
}
