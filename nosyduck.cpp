#include<iostream>
using namespace std;
void urutin(int lari[], int kiri, int kanan);
int main() {
	int T;
	cin>>T;
	for(int i=0; i<T; i++) {
		int N, lari[1000]={0};
		cin>>N;
		for(int j=0; j<N; j++) {
			cin>>lari[j];
		}
		urutin(lari, 0, N-1);
		for(int l=0; l<N; l++) {
			if(l==N-1) cout << lari[l];
			else cout << lari[l] << " ";
		}
		cout << endl;
	}
	return 0;
}

void urutin(int lari[], int kiri, int kanan) {
		int awal = kiri, akhir = kanan;
		int pivot = lari[(awal+akhir)/2];
		while(awal<=akhir) {
			while(lari[awal]>pivot) awal++;
			while(lari[akhir]<pivot) akhir--;
			if(awal<=akhir) {
				int temp = lari[awal];
				lari[awal] = lari[akhir];
				lari[akhir] = temp;
				awal++;
				akhir--;
			}
		}
		if(kiri<akhir) urutin(lari, kiri, akhir);
		if(kanan>awal) urutin(lari, awal, kanan);
}
