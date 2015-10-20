#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int a,b,r,x,y;
		cin>>a>>b>>r>>x>>y;
		cout << "Kasus #" << i << ": ";
		unsigned long long A=pow(x-a, 2), B=pow(y-b,2), R=pow(r,2);
		if((A+B)==R) cout << "GARIS\n";
		else if ((A+B)<R) cout<< "DALAM\n";
		else cout << "LUAR\n";
	}
	return 0;
}
