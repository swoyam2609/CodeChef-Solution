
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int n;
	    cin>>n;
	    string S;
	    cin>>S;
	     if(S.size()<=2)
	         {
	             cout<<S<<endl;
	         }
	         else{
	        sort(S.begin(),S.end());
	    cout<<S<<endl;}
	}
	return 0;
}
