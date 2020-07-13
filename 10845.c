#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int queue[100000];
int front = -1, back = -1;
int size = 0;

void push(int x) {
	if (front == -1) {
		front++;
	}

	size++;
	back++;
	queue[back] = x;
}

void pop() {
	if (size == 0) {
		printf("-1\n");
	}

	else {
		printf("%d\n", queue[front]);
		front++;
		size--;
	}
}

void print_size() {
	printf("%d\n", size);
}

void print_empty() {
	if (size == 0) printf("1\n");

	else printf("0\n");
}

void print_front() {
	if (size == 0) printf("-1\n");

	else printf("%d\n", queue[front]);
}

void print_back() {
	if (size == 0) printf("-1\n");

	else printf("%d\n", queue[back]);
}

int main() {
	int n, i;
	char* command;
	int num;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		command = (char*)malloc(sizeof(char) * 30);
		scanf("%s", command);

		if (strcmp("push", command) == 0) {
			scanf("%d", &num);
			push(num);
		}

		if (strcmp("pop", command) == 0) {
			pop();
		}

		if (strcmp("size", command) == 0) {
			print_size();
		}

		if (strcmp("empty", command) == 0) {
			print_empty();
		}

		if (strcmp("front", command) == 0) {
			print_front();
		}

		if (strcmp("back", command) == 0) {
			print_back();
		}
	}
  
	return 0;
}
