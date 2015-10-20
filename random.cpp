#include<cstdio>
int main() {
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		if(i==N-1) { printf("%d\n", i); break; }
		printf("%d ", i);
	}
	return 0;
}
