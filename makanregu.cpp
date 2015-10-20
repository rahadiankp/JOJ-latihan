#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int agg[4]={0}, N;
		cin>>N;
		for(int j=0; j<N; j++) {
			int x;
			cin>>x;
			agg[x]++;
		}
		int min=1000;
		for(int h=1; h<=3; h++) {
			if(agg[h]<min) min=agg[h];
		}
		cout<<"Kasus #" << i << ": " << min << endl;
	}
	return 0;
}
