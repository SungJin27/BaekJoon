#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char pattern[51];
char name[51][51];

int main() {
	int n;
	int i;
	int j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", name[i]);
	}

	strcpy(pattern, name[0]);

	for (i = 1; i < n; i++) {
		for (j = 0; j < strlen(name[0]); j++) {
			if (name[i][j] == '?') continue;

			if (name[i][j] != pattern[j]) pattern[j] = '?';
		}
	}

	printf("%s", pattern);

	return 0;
}
