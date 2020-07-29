#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	int i;
	scanf("%d", &n);

	int k = 1;
	int honey = 1;

	while (1) {
		if (honey >= n) break;
		honey = honey + k * 6;
		k++;
	}

	printf("%d\n", k);

	return 0;
}
