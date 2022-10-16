#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--)
    {
        int a,c2,d2,w=0;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++)
        cin>>b[i];
       
        for(int i=0;i<a;i++){
        if(b[i]>=a)
            {
            
                c2=i;
            }
        else if(b[i]<=1)
            {
                
                d2=i;
            }    
        }
       
      
        if(d2<c2)
        cout<<((a-1)-c2)+d2<<endl;
        else
        cout<<((a-1)-c2)+d2-1<<endl;
    }
	return 0;
}
