#include<cstdio>
int main() {
	int T, N;
	scanf("%d", &T);
	for(int i=1; i<=T; i++) {
		scanf("%d",&N);
		if(N%2==1) printf("Kasus #%d: CINTA\n",i);
		else printf("Kasus #%d: TIDAK CINTA\n",i);
	}
	return 0;
}
