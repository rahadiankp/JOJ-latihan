#include<iostream>
using namespace std;
int main() {
	int N, T, key, index[10001];
	cin>>T;
	for(int j=0; j<T; j++) {
		cin>>N>>key;
		for(int i=1; i<=N; i++) {
			cin>>index[i];
		}
		for(int k=1; k<=N; k++) {
			if(index[k]==key) {cout<<k<<endl;break;}
		}
	}
	return 0;
}
