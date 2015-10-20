#include<iostream>
using namespace std;
int main() {
	long long a,b,c,T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		cin>>a>>b>>c;
		if(a+b==c) {cout<< "Kasus #"<<i<< ": +\n"; continue;}
		else if(a-b==c) {cout<< "Kasus #"<<i<< ": -\n"; 
continue;}
		else if(a*b==c) {cout<< "Kasus #"<<i<< ": *\n"; 
continue;}
		else if (a%b==0) {cout<< "Kasus #"<<i<< ": /\n"; 
continue;}
		else cout<< "Kasus #"<<i<< ": TIDAK ADA SOLUSI\n";
	}
	return 0;
}
