#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T, apel, hari;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>apel>>hari;
		cout<< "Kasus #" << i << ": " << ceil((double)apel/hari) << endl;
	}
	return 0;
}
