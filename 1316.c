#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char* alphabet;
	int n;
	char* str;
	int i, j;
	int sum = 0;
	int flag;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		alphabet = (char*)calloc(26, sizeof(char));
		str = (char*)malloc(sizeof(char) * 101);
		flag = 1;

		scanf("%s", str);
		
		for (j = 0; j < strlen(str); j++) {
			while (j + 1 < strlen(str)) {
				if (str[j] == str[j + 1]) j++;
				else break;
			}
			alphabet[str[j] - 'a'] ++;
		}
		
		for (j = 0; j < 26; j++) {
			if (alphabet[j] > 1) {
				flag = -1;
				break;
			}
		}

		if (flag == 1) sum++;

		free(alphabet);
		free(str);
	}

	printf("%d", sum);

	return 0;
}
