#include <iostream>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long int n, x;
       cin>>n>>x;
      if(n%6==0)
      cout<<(n/6)*x<<endl;
      else
      cout<<(n/6+1)*x<<endl;
       
   }
	return 0;
}
