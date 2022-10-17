#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    
	    int remain = 0;
	    
	    if(n%2 == 0 && m%2 == 0){
	        remain = 0;
	    }
	    else{
	        if(n%2==1 && m%2 == 1){
	            remain = n+m-1;
	        }
	        else{
	            if(n%2==1 && m%2==0){
	                remain = m;
	            }
	            else{
	                remain = n;
	            }
	        }
	    }
	    cout<<remain<<endl;
	}
	return 0;
}
