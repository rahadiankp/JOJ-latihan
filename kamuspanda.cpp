#include<iostream>
using namespace std;
int main() {
	int T;
	string kata;
	cin>>T;
	for(int i=0; i<T; i++) {
		int huruf[123]={0}, sum=0;
		cin>>kata;
		for(int j=0; j<kata.length(); j++) {
			huruf[(int)kata.at(j)]++;
		}
		for(int k=97; k<123; k++) {
			if(huruf[k]>0) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
