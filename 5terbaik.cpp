#include<iostream>
using namespace std;
void urutin(int nilai[], int kiri, int kanan);
int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++) {
		int N, nilai[100000]={0};
		cin>>N;
		for(int l=0; l<N; l++) {
			cin>>nilai[l];
		}
		urutin(nilai, 0, N-1);
		int sum=0;
		for(int f=0; f<5; f++) {
			sum+=nilai[f];
		}
		cout<<sum<<endl;
	}
	return 0;
}

void urutin(int nilai[], int kiri, int kanan) {
	int awal = kiri, akhir = kanan, temp;
	int pivot = nilai[(awal+akhir)/2];
	while(awal<=akhir) {
		while(nilai[awal]>pivot) awal++;
		while(nilai[akhir]<pivot) akhir--;
		if(awal<=akhir) {
			temp = nilai[awal];
			nilai[awal] = nilai[akhir];
			nilai[akhir] = temp;
			awal++;
			akhir--;
		}
	}
	if(kiri<akhir) urutin(nilai,kiri,akhir);
	if(kanan>awal) urutin(nilai, awal, kanan);
}
