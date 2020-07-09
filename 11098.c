#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int n, p;
	int i, j;
	char** name;
	int* price;
	int large;
	char* expensive;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &p);
		name = (char**)malloc(sizeof(char*) * p);

		for (j = 0; j < p; j++) {
			name[j] = (char*)malloc(sizeof(char) * 21);
		}

		price = (int*)malloc(sizeof(int) * p);

		large = -1;
		expensive = (char*)malloc(sizeof(char) * 21);

		for (j = 0; j < p; j++) {
			scanf("%d %s", &price[j], name[j]);
			if (price[j] > large) {
				strcpy(expensive, name[j]);
				large = price[j];
			}
			
		}

		printf("%s\n", expensive);

		free(expensive);
		free(price);
		for (j = 0; j < p; j++) {
			free(name[j]);
		}
		free(name);
	}

	return 0;
}
