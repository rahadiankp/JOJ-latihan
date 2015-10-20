#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
	string str;
	int T;
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>str;
		for(int j=0; j<str.length(); j+=2) {
			int jam = (int)str.at(j);
			str.at(j) = (char)jam-32;
		}
	cout << str << endl;
	}
	return 0;
}
