#include<cstdio>
int main() {
	int N, sum=0, num;
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}
