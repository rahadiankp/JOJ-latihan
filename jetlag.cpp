#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, sum=0, angka=0;
		int zona;
		cin>>N>>zona;
		/*for(int j=zona.length()-1; j>=1; j--) {
			angka += ((int)zona.at(j)-48)*pow(10, zona.length()-1-j);
		}
		switch(zona.at(0)) {
			case '+':
				sum += N+angka;
				break;
			case '-':
				sum += N-angka;
				break;
		}*/
		sum = N+zona;
		if(sum>24) sum %= 24;
		else if(sum<0) sum += 24;
		cout<<"Case #"<<i<<": ";
		if(sum<10 || sum == 24) cout<<"0"<<sum%24<<endl;
		else cout<<sum<<endl;
	}
	return 0;
}
