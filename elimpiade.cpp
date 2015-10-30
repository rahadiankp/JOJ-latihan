#include<iostream>
using namespace std;
int gcd(int a, int b);
int main() {
        int T;
        cin>>T;
        for(int i=1; i<=T; i++) {
                int periode[5];
                for(int j=0; j<5; j++) {
                        cin>>periode[j];
                }
                int g=gcd(periode[0],periode[1]);
                int lcm=periode[0]*periode[1]/g;
                for(int f=2; f<5; f++) {
                        int g=gcd(periode[f],lcm);
                        lcm = lcm*periode[f]/g;
                }
                cout << "Case #" << i << ": " << 2000+lcm<<endl;
        }
        return 0;
}

int gcd(int a, int b){
   if(b==0)
   {
     return a;
   }
   return gcd(b,a%b);
}
