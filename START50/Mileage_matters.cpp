#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n,x,y,a,b;
	  cin>>n>>x>>y>>a>>b;
	  float u,v;
	  u=x/a;
	  v=y/b;
	  if((u*n)>(v*n))
	  cout<<"DIESEL"<<endl;
	  
	  else if((u*n)<(v*n))
	  cout<<"PETROL"<<endl;
	  
	  else
	  cout<<"ANY"<<endl;
    }
    
return 0;
}