#include<iostream>
#include<cmath>
using namespace std;
void urutin(int orang[], int kiri, int kanan);
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int M,N,orang[201]={0}, min;
		cin>>M>>N;
		for(int j=1; j<=M; j++) {
			cin>>orang[j];
		}
		for(int b=M+1; b<=(M+N);  b++) {
			cin>>orang[b];
		}
		urutin(orang, 1, M+N);
		if((M+N)%2==0) min = abs(orang[(M+N)/2]-orang[(M+N)/2+1]);
		else {
			if(orang[(M+N)/2]>orang[(M+N)/2-2]) min = abs(orang[(M+N)/2-2
