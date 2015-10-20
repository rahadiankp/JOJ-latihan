#include<iostream>
using namespace std;
int main() {
	int T,N;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int sum=0, x;
		cin>>N;
		for(int l=0; l<N; l++) {
			cin>>x;
			if(x>0) sum+=x;
		}
		cout<< "Kasus #" << i << ": " << sum << endl;
	}
	return 0;
}
