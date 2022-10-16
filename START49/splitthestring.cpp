#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,count=0;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    for(auto i:s){
	        count+=((i == '1') ? 1 : -1); 
	    }
	    count = abs(count);
	    cout<<(count+m-1)/m<<endl;
	    
	}
	return 0;
}