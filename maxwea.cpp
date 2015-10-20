#include<iostream>
using namespace std;
int main() {
	int max=0, N, Y;
	cin>>N;
	for(int i=0; i<N; i++) {
		cin>>Y;
		if(Y>max) max = Y;
	}
	cout << max << endl;
	return 0;
}
