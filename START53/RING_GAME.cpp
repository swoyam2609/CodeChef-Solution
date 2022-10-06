#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int b = 0,c =0;
	    for(int i=1;i<n;i++){
	        if(a[i]==0&&a[i-1]==0){
	            b++;
	        }else if( a[i]== 1 && a[i-1]== 1 ){
	            c++;
	        }
	    }
	    if(a[0]==0&&a[n-1]==0){
	        b++;
	    }else if(a[0]== 1 && a[n-1]== 1){
	        c++;
	    }
	    if(min(b,c)%2==0){
	        cout<<"Bob"<<endl;
	    }else{
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
