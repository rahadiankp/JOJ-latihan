#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, K, target;
		cin>>N>>K;
		while(K>0) {
			for(int j=1; j<=N; j++) {
				if(K==0) break;
				target=j;
				K--;
			}
			for(int g=N-1; g>1; g--) {
				if(K==0) break;
				target=g;
				K--;
			}
		}
		cout << "Case #" << i << ": " << target << endl;
	}
	return 0;
}
