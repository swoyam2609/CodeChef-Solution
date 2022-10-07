#include <iostream>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
      long long int x, n;
      long long res;
      cin>>x>>n;
      res=((2*n-x)*(x-1))*x;
      if(x==1)
      cout<<0<<endl;
      else 
      cout<<res/x<<endl;
     
   }
	return 0;
}
