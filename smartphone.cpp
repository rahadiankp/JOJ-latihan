#include<iostream>
using namespace std;
int main() {
	int storage[4]={16000, 32000, 64000, 128000};
	int T,N,size;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>N;
		int sum=0;
		for(int j=0; j<N; j++) {
			cin>>size;
			sum+=size;
		}
		for(int k=0; k<4; k++) {
			if(sum<=storage[k]) {
				cout << "Case #" << i<< ": " <<storage[k]/1000<<"GB\n";
				break;
			}
		}
	}
	return 0;
}
