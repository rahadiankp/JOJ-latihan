#include<iostream>
using namespace std;
int main() {
	int T, price[1001]={0};
	cin>>T;
	for(int i=1; i<=T; i++) {
		int n, uang;
		cin>>n>>uang;
		for(int j=0; j<n; j++) {
			int rego;
			cin>>rego;
			price[j]=rego;
		}
		int min=0;
		for(int l=0; l<n; l++) {
			if(price[l]<=uang && price[l]>=min) min = price[l];
		}
		if(min>0) cout << "Case #" << i << ": " << min << endl;
		else cout << "Case #" << i << ": HAPPY BIRTHDAY ANTONIO" << endl;
	}
	return 0;
}
