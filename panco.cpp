#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T, N, book;
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>N;
		int max=0, L;
		for(int j=1; j<=(int)pow(2,N); j++) {
			cin>>L;
			if(L>max) { max = L; book=j; }
		}
	cout << book << endl;
	}
	return 0;
}
