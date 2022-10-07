#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  string s;
    long long int n,k,ans=1;
    cin>>n>>k;
    cin>>s;
    if(k==n){ans=2;}
    else if(k%2==1) {
        for(int i=0;i<n;i++){
        ans*=2;
        ans%=1000000007;
        }
    }
    else{  
        for(int i=1;i<n;i++){
        ans*=2;
        ans%=1000000007;
        }
    }
    cout<<ans<<endl;
	}
	return 0;
}
