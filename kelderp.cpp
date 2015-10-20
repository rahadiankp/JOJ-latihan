#include<iostream>
using namespace std;
void yes();
int main() {
	int N,M,C[101]={0};
	cin>>N>>M;
	for(int i=1; i<=M; i++) {
		cin>>C[i];
	}
	int sum=0, cek=2;
	if(M>2) {
		for(; cek<=M-1; cek++) {
			sum = C[cek-1]+C[cek]+C[cek+1];
			if(sum>=N) {yes(); return 0;}
			}
		}
	else if(M==2) {
		if(C[1]+C[2]>=N) {yes(); return 0;}
		}
	else if(M==1) {
		if(C[1]>=N) { yes(); return 0;}
		}
	cout<<"NO\n";
	return 0;
}

void yes() {
	cout<<"YES\n";
}
