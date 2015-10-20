#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int pangkat, mod, ans=1;
		cin>>pangkat>>mod;
		for(int j=1; j<=pangkat; j++) {
			ans = (ans*10)%mod;
		}
		cout<< "Kasus #" << i << ": " << ans << endl;
	}
	return 0;
}
