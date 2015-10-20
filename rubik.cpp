#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T, size;
	cin>>T;
	for(int i=0; i<T; i++) {
		cin>>size;
		if(size==1) cout << "1\n";
		else if(size==2) cout << "8\n";
		else if(size!=2)cout << pow(size, 3)-pow(size-2,3) << endl;
	}
	return 0;
}	
