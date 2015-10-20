#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, money, sum=0;
		cin>>N>>money;
		for(int j=0; j<N; j++) {
			int x;
			cin>>x;
			if(x<=money) sum++;
		}
		cout<<"Case #" << i << ": " << sum <<endl;
	}
	return 0;
}
