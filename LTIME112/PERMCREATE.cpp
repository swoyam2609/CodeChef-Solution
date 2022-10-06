#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<4) {cout<<-1<<endl;continue;}
	    if(n==4){cout<<"2"<<" "<<"4"<<" "<<"1"<<" "<<"3"<<endl;continue;}
	    for(int i=1;i<=n;i+=2)
	       cout<<i<<" ";
	    for(int i=2;i<=n;i+=2)
	       cout<<i<<" ";
	       cout<<endl;
	}
	return 0;
}
