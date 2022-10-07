#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,check=0;
	    cin>>n;
	    int a[n][5];
	    for(int i=0;i<n;i++){
	        for(int j=1;j<6;j++){
	            a[i][j]=0;
	        }
	    }
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        while(num--){
	            int x;
	            cin>>x;
	        a[i][x]=1;
	        }
	    }
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if((a[i][5]+a[j][5]>=1)&&(a[i][1]+a[j][1]>=1)&&(a[i][2]+a[j][2]>=1)&&(a[i][3]+a[j][3]>=1)&&(a[i][4]+a[j][4]>=1)){
	                check = 1;
	                cout<<"YES\n";
	                break;
	            }
	            
	        }
	        if(check==1){
	                break;
	            }
	    }
	    if(check==0){
	        cout<<"NO\n";
	    }
	}
	return 0;
}
