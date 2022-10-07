
#include <bits/stdc++.h>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long x, y, count=0;
       cin>>x>>y;
       
       if(x==y)
       cout<<x<<endl;
    
     else if(x!=y && (x!=0 && y!=0))
     {
         if(x>y)
         swap(x,y);
         
        
         while(x<y)
         {
            x=x*2;
            count++;
         }
        
        cout<<count+y<<endl;
        
     }
     else  
     cout<<-1<<endl;
   } 
    
	return 0;
}
