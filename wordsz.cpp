#include<iostream>
using namespace std;
int main() {
	string kode;
	int T, N;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>N;
		int sum4=0, sum5=0, sum6=0;
		for(int j=1; j<=N; j++) {
			cin>>kode;
			if(kode.length()==4) sum4++;
			if(kode.length()==5) sum5++;
			if(kode.length()==6) sum6++;
		}
		cout<< "Case #" << i << ": " << sum4 << " " << sum5 << " " << sum6 <<endl;
	}
	return 0;
}
		
