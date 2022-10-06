#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=0,y=0;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<0){
	        x++;}
	        if(arr[i]==0){
	        y++;}
	    }
        if(y>=1||x%2==0){
            cout<<0<<endl;
        }
        else if(x==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
	}
	return 0;
}
