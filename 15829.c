#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define r 31
#define m 1234567891

int main() {
	int l;
	scanf("%d", &l);
	char str[51];

	scanf("%s", str);

	int i;
	unsigned long long h = 0;
	unsigned long long a;

	for (i = 0; i < l; i++) {
		a = str[i] - 96;
		h = h + a * pow(r, i);
	}

	printf("%lld\n", h % m);

	return 0;
}
