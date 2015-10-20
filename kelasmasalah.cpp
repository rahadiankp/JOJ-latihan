#include<iostream>
using namespace std;
int main() {
	int T, N;
	double nilai[10000];
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>N;
		int jum=0,sum=0;
		for(int j=0; j<N; j++) {
			cin>>nilai[j];
			sum+=nilai[j];
		}
		for(int v=0; v<N; v++) {
			if(nilai[v]*N<sum) jum++;
		}
		cout<<jum<<endl;
	}
	return 0;
}
