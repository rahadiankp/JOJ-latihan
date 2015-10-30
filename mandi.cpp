#include<iostream>
using namespace std;
int main() {
        int T;
        cin>>T;
        for(int i=1; i<=T; i++) {
                int N, M, L;
                cin>>N>>M>>L;
                int besar, kecil;
                if(N>M) { besar = N; kecil = M; }
                else {besar = M; kecil = N; }
                while(L>0) {
                        if(L%besar==0) { L = 0; break; }
                        L-=kecil;
                }
                cout << "Kasus #" << i << ": ";
                if(L==0) cout << "YA" << endl;
                else cout << "TIDAK" << endl;
        }
        return 0;
}
