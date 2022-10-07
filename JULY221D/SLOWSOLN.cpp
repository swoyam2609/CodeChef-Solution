#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        long long maxt,maxn,sumn;
        cin>>maxt>>maxn>>sumn;
        
        if((sumn/maxn)>=maxt)
        {
            long long power=pow(maxn,2);
            long long mpower=pow((sumn%maxn),2);
            cout<<maxt*power<<endl;
        }
        else
        {
          long long power=pow(maxn,2);
          long long mpower=pow((sumn%maxn),2);
          cout<<((sumn/maxn)*power)+mpower<<endl;
        }
    }
	return 0;
}
