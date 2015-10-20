#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=0; i<T; i++) {
		int N, M, sum=0;
		cin>>N>>M;
		for(int l=0; l<N; l++) {
			int x;
			cin>>x;
			sum+=x;
		}
		if(sum==M) cout << "YA\n";
		else cout << "TIDAK\n";
	}
	return 0;
}
