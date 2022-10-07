#include <bits/stdc++.h>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long int n,count=0;
       cin>>n;
       string a,b;
       int h[26]={0};
       cin>>a>>b;
       for(int i=0;i<n;i++)
      {
          if(a[i]!=b[i])
          h[b[i]-97]+=1;
          else continue;
      }
       for(int i=0;i<26;i++)
      {
          if(h[i]!=0)
          count++;
      }
      cout<<count<<endl;
   }
	return 0;
}
