#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(long long int i=0;i<t;i++){
	   long long int n;
	    cin>>n;
	    long long int p=0;
	   long long int arr[n];
	   long long int a[n];
	    
	       for(long long int i=0;i<n;i++){
	           cin>>arr[i];
	       
	    }
	    for(long long int i=0;i<n;++i){
	        p=p+arr[i];
	    }
	    long long int y=p/(n+1);
	    for(long long int i=0;i<n;i++){
	        a[i]=arr[i]-y;
	        
	    }
	    for(long long int i=0;i<n;++i){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    }
	    
	
	return 0;
}
