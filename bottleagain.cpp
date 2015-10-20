#include<iostream>
using namespace std;
int main() {
	int T, N;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int botol[2000000000]={0}, yi, Q, xi, tanya[10000];
		cin>>N;
		for(int j=0; j<N; j++) {
			cin>>yi;
			botol[yi]++;
		}
		cin>>Q;
		for(int h=0; h<Q; h++) {
			cin>>xi;
		}
	}
	return 0;
}
