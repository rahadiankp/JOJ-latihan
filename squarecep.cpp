#include<iostream>
#include<cmath>
#define mod 1000000007
using namespace std;
int main() {
	int T,a;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>a;
		int sum=1;
		a-=1;
        	while(a>=0) {
                	if(a>=20) {
                        	sum = (sum*4*(int)pow(5, 20))%mod;
                        	a = a-20;
                	}
                	else {
                        	sum = (sum*4*(int)pow(5, a))%mod;
                        	a = -1;
                	}
		}
		cout<<"Case #"<<i<<": "<<sum<<endl;
	}
	return 0;
}
