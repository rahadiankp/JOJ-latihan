#include<iostream>
using namespace std;
void conv(string kata);
int main() {
	string huruf="0000000ABCDEFGHIJKLMNOPQRSTUV";
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		string kata;
		cin>>kata;
		cout<<"Case #1: ";
		conv(kata);
		cout << endl;
	}
	return 0;
}

void conv(string kata) {
	string huruf="0000000ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string ka=kata;
	int len=ka.length(), titik;
	for(int i=0; i<len; i++) {
		for(int j=7; j<=32; j++) {
			if(ka.at(i)==huruf.at(j)) { titik=j;}
		}
		int ulang=titik%3;
		if(ulang==0) ulang = 3;
		for(int k=1; k<=ulang; k++) {
			cout << titik/3;
		}
		cout << " ";
	}
}
