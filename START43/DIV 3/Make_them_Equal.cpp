#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,z,ans,i,x;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        z = 1;
        for(i = 0; i < 32 && z; i++){
            if(a==b&&b==c){
                cout<<"YES\n";
                z = 0;
                break;
            }
            // cout<<a<<" "<<b<<" "<<c<<endl;
            x = (a&1)+(b&1)+(c&1);
            if(x==3||x==0){
                cout<<"NO\n";
                z = 0;
                break;
            }
            if(x==2){
                if(!(a&1)){
                    a++;
                }if(!(b&1)){
                    b++;
                }if(!(c&1)){
                    c++;
                }
            }if(x==1){
                if((a&1)){
                    a++;
                }if((b&1)){
                    b++;
                }if((c&1)){
                    c++;
                }
            }
            a = (a>>1);b = (b>>1);c = (c>>1);
        }
        if(z){
            cout<<"NO\n";
        }
    }
	return 0;
}