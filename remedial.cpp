#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, nilai,sum=0;
		const int acu=60;
		cin>>N;
		for(int j=0; j<N; j++) {
			cin>>nilai;
			if(nilai<60) sum++;
		}
		cout<<"Case #" << i << ": " << sum << endl;
	}
	return 0;
}
