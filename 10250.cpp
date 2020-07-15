#include<iostream>	
using namespace std;

int main() {
	int t, i;
	int j;
	int h, w, n;
	int a, b;
	string first, second;

	scanf("%d", &t);
	
	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		
		a = 1;
		b = 0;
		for (j = 0; j < n; j++) {
			b++;

			if (b > h) {
				a++;
				b = 1;
			}
		}

		printf("%d", b);
		if (a < 10) printf("0");
		printf("%d\n", a);
	}

	return 0;
}
