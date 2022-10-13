#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int H[n+1]={0};
	    for(int i=0;i<n;i++){
	       int a;
	        cin>>a;
	        H[a]++;
	    }
	   int max=0,p=0;
	    for(int i=1;i<=n;i++){
	        if(H[i]>max){
	           max=H[i];
	           p=i;
	        }
	    }
	   if(H[p]%2==0){
	       H[p]=H[p]/2;
	   }
	   else{
	        H[p]=H[p]/2+1;
	   }
	   int max1=0;
	   for(int i=1;i<=n;i++){
	       if(H[i]>max1){
	           max1=H[i];
	       }
	   }
	   cout<<max1<<endl;
	}
	return 0;
}
