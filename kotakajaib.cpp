#include<iostream>
using namespace std;
int main() {
	int T, n;
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>n;
		cout<<(n*n*n+n)/2<<endl;
	}
	return 0;
}
