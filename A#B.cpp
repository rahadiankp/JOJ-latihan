#include<iostream>
using namespace std;
int main() {
	int T;
	string A, B;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>A>>B;
		int sumA=0, sumB=0;
		for(int j=0; j<A.length(); j++) {
			sumA = sumA+((int)A.at(j)-48);
		}
                for(int k=0; k<B.length(); k++) {
                        sumB = sumB+((int)B.at(k)-48);
                }
		cout << "Case #" << i << ": " << sumA*sumB << endl;
	}
	return 0;
}	
