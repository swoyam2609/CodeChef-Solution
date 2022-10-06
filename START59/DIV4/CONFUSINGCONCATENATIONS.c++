#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	        int c;
	        cin>>c;
	        v.push_back(c);
	        mp[i]=c;
	    }
	     auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
                int p=pr->first;
        if(p==0){
            cout<<"-1"<<endl;
        }else{
            cout<<p<<endl;
            for(int i=0;i<p;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            cout<<v.size()-p<<endl;
            for(int i=p;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
	}
	return 0;
}
