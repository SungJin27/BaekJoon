#include<iostream>
using namespace std;

int main() {
	int n, m;
	int* card;
	int i, j, k;

	int num;
	int small = -1;
	scanf("%d %d", &n, &m);

	card = new int[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (card[i] == card[j]) continue;
			for (k = 0; k < n; k++) {
				if (card[i] == card[k]) continue;
				if (card[j] == card[k]) continue;

				num = card[i] + card[j] + card[k];

				if (num <= m) {
					if (num >= small) small = num;
				}
			}
		}
	}

	printf("%d\n", small);

	delete[] card;

	return 0;
}
