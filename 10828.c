#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[100001];
int top = -1;
int size = 0;

void push(int a) {
	top++;
	stack[top] = a;
	size++;
}

void pop() {
	if (top == -1) printf("-1\n");

	else {
		printf("%d\n", stack[top]);
		top--;
		size--;
	}
}

void print_size() {
	printf("%d\n", size);
}

void print_empty() {
	if (top == -1) printf("1\n");

	else printf("0\n");
}

void print_top() {
	if (top == -1) printf("-1\n");

	else printf("%d\n", stack[top]);
}

int main() {
	int n;
	int i;
	char* command;
	int num;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		command = (char*)malloc(sizeof(char) * 10);
		scanf("%s", command);

		if (strcmp(command, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}

		if (strcmp(command, "pop") == 0) {
			pop();
		}

		if (strcmp(command, "size") == 0) {
			print_size();
		}

		if (strcmp(command, "empty") == 0) {
			print_empty();
		}
		
		if (strcmp(command, "top") == 0) {
			print_top();
		}

		free(command);
	}

	return 0;
}
