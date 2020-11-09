#include<iostream>
using namespace std;

int sumPart(int num) {
	int a;
	int sum = 0;

	while (num != 0) {
		a = num % 10;
		num = num / 10;
		sum = sum + a;
	}

	return sum;
}

int main() {
	int i;
	int arr[11000] = { 0 };

	for (i = 1; i <= 10000; i++) {
		arr[i + sumPart(i)] = 1;
	}

	for (i = 1; i <= 10000; i++) {
		if (arr[i] == 0) cout << i << endl;
	}

	return 0;
}
