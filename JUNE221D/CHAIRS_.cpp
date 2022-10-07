#include <iostream>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long int x, y;
       cin>>x>>y;
       if (y<=x)
       cout<<x-y<<endl;
       else
       cout<<0<<endl;
    
       
   }
	return 0;
}
