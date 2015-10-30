#include<iostream>
using namespace std;
int main() {
        int T;
        cin>>T;
        for(int i=1; i<=T; i++) {
                string nama;
                cin>>nama;
                bool d=false, u=false, c=false, k=false;
                int loc=0, pan=nama.length();
                for(int j=0; j<pan; j++) {
                        if(nama.at(j)=='d') { d=true; loc=j; break;}
                }
                for(int j=loc; j<pan; j++) {
                        if(nama.at(j)=='u') { u=true; loc=j; break;}
                }
                for(int j=loc; j<pan; j++) {
                        if(nama.at(j)=='c') { c=true; loc=j; break;}
                }
                for(int j=loc; j<pan; j++) {
                        if(nama.at(j)=='k') { k=true; loc=j; break;}
                }
                cout<<"Case #"<<i<<": ";
                if(d && u && c && k) cout<<"YES\n";
                else cout<<"NO\n";
        }
        return 0;
}
