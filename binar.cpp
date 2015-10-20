#include<iostream>
#include<cmath>
using namespace std;
int main() {
	unsigned long long angka, carry=0, base;
	int T;
	string sym="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>angka>>base;
		string hasil, hehe;
		int div;
		while(angka!=0) {
			carry = angka/base;
			div = angka%base;
			hehe = sym.at(div);
			hasil.insert(0, hehe);
			angka /= base;
		}
		cout << "Case #" <<i << ": " << hasil << endl;
	}
	return 0;
}
