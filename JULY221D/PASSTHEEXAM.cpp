#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        long int a,b,c;
        cin>>a>>b>>c;
        
        if(a>=10 && b>=10 && c>=10)
        {
            long int sum=a+b+c;
            if(sum>=100)
            cout<<"PASS"<<endl;
            else
            cout<<"FAIL"<<endl;
        }
        else
        cout<<"FAIL"<<endl;
    }
	return 0;
}
