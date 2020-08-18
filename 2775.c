#include<stdio.h>
int main() {
	int arr[15][14] = { 0, };

	int t, k, n;
	int i;
	int j;
	int a;
	scanf("%d", &t);
	
	for (i = 0; i < 14; i++) {
		arr[0][i] = i + 1;
	}

	for (i = 1; i <= 14; i++) {
		for (j = 0; j < 14; j++) {
			for (a = 0; a <= j; a++) {
				arr[i][j] = arr[i - 1][a] + arr[i][j];
			 }
		}
	}

	for (i = 0; i < t; i++) {
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", arr[k][n - 1]);
	}

	return 0;
}
