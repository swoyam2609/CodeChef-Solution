#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        int alice,bob,charlie;
        cin>>alice>>bob>>charlie;
        if (alice>bob && alice>charlie)
        cout<<"Alice"<<endl;
        if(bob>alice && bob>charlie)
        cout<<"Bob"<<endl;
        if(charlie>alice && charlie>bob)
        cout<<"Charlie"<<endl;
        
    }
	return 0;
}
