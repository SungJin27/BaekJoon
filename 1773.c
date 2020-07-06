#include<stdio.h>
#include<stdlib.h>
int fire[2000001] = { 0, };

int main() {
	int n, c;
	int* arr;
	int i;
	int num = 0;
	int sum = 0;
	scanf("%d %d", &n, &c);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		num = 0;
		while (1) {
			num = num + arr[i];
			fire[num] = 1;
			//printf("%d\n", num);
			if (num >= c) break;
		}
	}

	for (i = 0; i < c + 1; i++) {
		if (fire[i] == 1) sum++;
		//printf("%d\n", i);
	}

	printf("%d", sum);

	return 0;
}
