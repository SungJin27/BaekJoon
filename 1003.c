#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int t;
	int num;
	int i, j;
	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d", &num);

		if (num == 0) printf("1 0\n");

		else if (num == 1) printf("0 1\n");

		else if (num == 2) printf("1 1\n");

		else if (num == 3) printf("1 2\n");

		else {
			int a1 = 1, b1 = 1, a2 = 1, b2 = 2;
			int ans1, ans2;

			for (j = 4; j <= num; j++) {
				ans1 = a1 + a2;
				ans2 = b1 + b2;

				a1 = a2; b1 = b2;
				a2 = ans1; b2 = ans2;
			}

			printf("%d %d\n", ans1, ans2);

		}
	}
	return 0;
}
