#include<iostream>
using namespace std;

bool calculate(int n, int b) {
	n = n - 5 * b;
	if (n % 3 == 0) return true;
	else return false;
}

int main() {
	int n;
	int res = -1;
	int sum;
	cin >> n;

	int b = n / 5;

	while (b >= 0) {
		if (calculate(n, b)) {            //To reduce the number of bag, use as many as possible 5kg bag
			res = 1;
			sum = b + (n - 5 * b) / 3;
			break;
		}
		else b--;
	}
	
	if (res == 1) cout << sum << endl;
	else cout << -1 << endl;

	return 0;
}
