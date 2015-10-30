#include<iostream>
#include<cmath>
using namespace std;
int main() {
        int T;
        cin>>T;
        for(int i=1; i<=T; i++) {
                int S;
                cin>>S;
                int xt=(S+1)/2, yt=xt, kunci=(S-1)/2;
                cout<<"Case #"<<i<<":"<<endl;
                for(int j=1; j<=S; j++) {
                        for(int g=1; g<=S; g++) {
                                if(sqrt((xt-g)*(xt-g)+(yt-j)*(yt-j))<=kunci) cout<<"*";
                                else cout<<".";
                        }
                        cout<<endl;
                }
        }
        return 0;
}
