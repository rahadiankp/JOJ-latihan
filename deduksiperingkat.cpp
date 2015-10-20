#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, M, skor[100001]={0}, max=0, min=10000002;
		cin>>N>>M;
		skor[M]++;
		for(int j=0; j<N; j++) {
			int x;
			cin>>x;
			skor[x]++;
			if(x>max) max = x;
			if(x<min) min = max;
		}
		int rank=0;
		for(int k=max; k>=min; k--) {
			if(skor[k]!=0) rank++;
			if(k==M) break;
		}
		cout << "Kasus #" << i << ": " << rank << endl;
	}
	return 0;
}
