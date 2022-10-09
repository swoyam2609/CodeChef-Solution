#include<bits/stdc++.h>
#include<iostream>
#include<map>
#define ll long long
using namespace std;
void test(){
    int n; cin>>n;
    ll  arr[n];
    ll count=0;
    map <ll,ll> maap;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maap[arr[i]]++;
    }

    for( auto r : maap){
        if(r.second >1){
            count+=(r.second*(r.second-1))/2;
        }
    }
    cout<<count<<endl;
}
int main() {
	// your code goes here
	int tt; cin>>tt;
	while(tt--){
	    test();
	}
	return 0;
}