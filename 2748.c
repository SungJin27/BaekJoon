#include<iostream>
using namespace std;

int main() {
	int n;
	int i;
	cin >> n;
	
	long long a, b, c;
	c = 1;
	b = 1;
	a = 0;

	for (i = 2; i <= n; i++) {
		c = b + a;
		a = b;
		b = c;
	}

	cout << c << endl;

	return 0;
}
