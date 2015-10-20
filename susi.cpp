#include<iostream>
using namespace std;
int main() {
	int T, N, Y, X;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int botol[10000]={0};
		cin>>N;
		for(int j=0; j<N; j++) {
			cin>>Y;
			botol[Y]++;
		}
			cin>>X;
		if(botol[X]>0) cout<< "Kasus #" << i << ": ADA " << botol[X] << " BOTOL DITEMUKAN" << endl;
		else cout<< "Kasus #" << i << ": TIDAK ADA" << endl;
	}
	return 0;
}
