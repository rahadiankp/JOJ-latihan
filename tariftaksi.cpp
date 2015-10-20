#include<iostream>
using namespace std;
int main() {
	int T, harg1, harg2, meter;
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>harg1>>harg2>>meter;
		if(meter<=2000) cout << harg1 << endl;
		else {
			meter -= 2000;
			harg2 = harg2*(meter/100);
			cout << harg1+harg2 << endl;
		}
	}
	return 0;		
}
