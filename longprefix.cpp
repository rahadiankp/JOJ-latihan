#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N;
		string kal[5];
		cin>>N;
		for(int j=0; j<N; j++) {
			cin>>kal[j];
		}
		int sama=99999, temp=0;
		for(int k=1; k<N; k++) {
			int h=0, d=0, lim;
			if(kal[k].length()<=kal[k-1].length()) lim=kal[k].length();
                        else lim = kal[k-1].length();
			for(int w=0; w<lim; w++) {
				if(kal[k].at(w)==kal[k-1].at(w)) d++;
			}
			if(d<sama) sama = d;
		}
		cout<<"Case #" << i <<": ";
		for(int c=0; c<sama; c++) {
			cout<<kal[0].at(c);
		}
		cout<<endl;
	}
	return 0;
}
