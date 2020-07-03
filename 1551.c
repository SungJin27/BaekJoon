#include<stdio.h>

int main() {
	int n, k;
	int i, j;
	char c;
	int arr[30] = { 0, };
	int ans[30] = { 0, };

	scanf("%d %d", &n, &k);
	getchar();

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}

	for (j = 0; j < k; j++) {
		n--;
		for (i = 0; i < n; i++) {
			arr[i] = arr[i + 1] - arr[i];
		}
	}
	for (i = 0; i < n; i++) {
		if (i != n - 1)printf("%d,", arr[i]);
		else printf("%d\n", arr[i]);
	}
	return 0;
}
