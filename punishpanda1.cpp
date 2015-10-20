#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, K;
		cin>>N>>K;
		cout<< "Case #" << i << ": " << ((K+N)/N)+(K%N) << endl;
	}
	return 0;
}
