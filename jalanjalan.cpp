#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		string arah;
		int sX=0, sY=0;
		cin>>arah;
		for(int j=0; j<arah.length(); j++) {
			if(arah.at(j)=='U') sY++;
			if(arah.at(j)=='S') sY--;
			if(arah.at(j)=='T') sX++;
			if(arah.at(j)=='B') sX--;
		}
		cout<<"Kasus #"<<i<<": "<<abs(sX)+abs(sY)<<endl;
	}
	return 0;
}
