#include <bits/stdc++.h>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long int a, b, x=0, count=0;
       cin>>a>>b;
       x=abs(a-b);
      int i=1;
      for(int i=1;i<=sqrt(x);i++)
       {
           if(x%i==0)
           {
               if(i!=sqrt(x))
               count=count+2;
               else
               count++;
           }
           else
           continue;
       }
      cout<<count<<endl;
       
   }
	return 0;
}
