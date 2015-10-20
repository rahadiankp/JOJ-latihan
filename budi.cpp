#include<cstdio>
int main() {
	int T, N, apel;
	scanf("%d", &T);
	for(int i=1; i<=T; i++) {
		scanf("%d%d",&apel,&N);
		printf("Kasus #%d: %d\n", i, apel*N);
	}
	return 0;
}
