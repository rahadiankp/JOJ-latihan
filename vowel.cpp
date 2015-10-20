#include<iostream>
#include<string>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		string kata;
		int sum=0;
		cin.ignore();
		getline(cin, kata);
		for(int j=0; j<kata.length(); j++) {
			if(kata.at(j)=='U' || kata.at(j)=='u') sum++;
			if(kata.at(j)=='I' || kata.at(j)=='i') sum++;
			if(kata.at(j)=='O' || kata.at(j)=='o') sum++;
			if(kata.at(j)=='E' || kata.at(j)=='e') sum++;
			if(kata.at(j)=='A' || kata.at(j)=='a') sum++;
		}
		cout<<"Kasus #"<<i<<": "<<sum<<endl;
	}
	return 0;
}
