#include<stdio.h>
int gcd(int a, int b) {
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int a, b, t;
	int i;

	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		if (b > a) {
			int temp = a;
			a = b;
			b = temp;
		}
		printf("%d %d\n", a * b / gcd(a, b), gcd(a, b));

	}

	return 0;
}
