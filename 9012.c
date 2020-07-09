#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[10000001];
int top = -1;
int size = 0;

void push(int a) {
	top++;
	stack[top] = a;
	size++;
}

int pop() {
	if (top == -1) return -1;

	else {
		top--;
		size--;
		return 1;
	}
}

int main() {
	int t, i;
	int j;
	char* str;
	int flag;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		str = (char*)malloc(sizeof(char) * 51);
		scanf("%s", str);
		
		top = -1;
		size = 0;
		flag = 1;

		for (j = 0; j < strlen(str); j++) {
			if (str[j] == '(') {
				push(1);
			}

			if (str[j] == ')') {
				flag = pop();
				if (flag == -1) break;
			}
		}

		if (flag == -1) printf("NO\n");

		if (flag == 1) {
			if (size == 0) printf("YES\n");
			else printf("NO\n");
		}

		free(str);
	}

	return 0;
}
