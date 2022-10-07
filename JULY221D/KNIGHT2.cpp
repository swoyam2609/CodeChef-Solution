#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int dx=abs(x1-x2);
        int dy=abs(y1-y2);
        if(dy%2==0 && dx%2==0)
        cout<<"Yes"<<endl;
        else if(dx%2!=0 && dy%2!=0)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
	return 0;
}
