#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T;
	string angka;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>angka;
		unsigned long long sum=0;
		for(int j=angka.length()-1; j>=0; j--) {
			if(angka=="1000000000000000000") sum = 111111111111111111;
			else
			if((int)angka.at(j)==48) sum+= pow(10,angka.length()-1-j);
		}
		cout << "Kasus " << i << ": " << sum << endl;
	}
	return 0;
}
