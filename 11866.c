#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int data;
	struct _node* link;
} node;

node* head = NULL;
node* curr;

void insert_node(int num) {
	if (head == NULL) {
		head = (node*)malloc(sizeof(node));
		head->data = num;
		head->link = NULL;
	}

	else {
		node* temp = head;
		node* prev;
		while (temp != NULL) {
			prev = temp;
			temp = temp->link;
		}

		temp = (node*)malloc(sizeof(node));
		prev->link = temp;
		temp->data = num;
		temp->link = NULL;
	}
}

void delete_node(int time) {
	int i;
	node* temp = curr;
	node* prev = curr;

	for (i = 0; i < time; i++) {
		prev = temp;
		temp = temp->link;
	}

	curr = temp->link;
	prev->link = temp->link;
	printf("%d", temp->data);
	free(temp);

}


int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int i;

	for (i = 1; i <= n; i++) {
		insert_node(i);
	}

	node* temp = head;
	while(temp->link != NULL) {
		temp = temp->link;
	}
	temp->link = head;

	curr = head;
	
	printf("<");
	for (i = 1; i <= n; i++) {
		delete_node(k - 1);
		if (i != n) printf(", ");
	}

	printf(">\n");

	return 0;
}
