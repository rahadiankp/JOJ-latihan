#include<iostream>
using namespace std;
int main() {
	int N, Y, num[1000]={0};
	cin>>N;
	for(int i=0; i<N; i++) {
		cin>>Y;
		num[i]=Y;
	}
	for(int j=N-1; j>=0; j--) {
		if(j==0) { cout << num[j] << endl; break; }
		cout << num[j] << " ";
	}
	return 0;
}
