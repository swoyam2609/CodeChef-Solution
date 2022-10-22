#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string A,B;
	    cin>>A>>B;
	    map<int,int> m1,m2;
	    for(int i=0;i<n;i++){
	        m1[A[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        m2[B[i]]++;
	    }
	    int c=0;
	    for(char i='a';i<='z';i++){
	        c=max(c,min(m1[i],m2[i]));
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
