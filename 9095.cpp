#include<iostream>
using namespace std;

int main() {
	int t;
	int i;
	int n;
	int count;
	int a, b;
	int j;

	cin >> t;

	for (i = 0; i < t; i++) {
		cin >> n;
		count = 0;
		a = 1; b = 2;

		for (j = 1; j <= n; j++) {
			if (j <= 3) {
				if (j == 1) count = 1;
				if (j == 2) count = 2;
				if (j == 3) count = 4;
			}
			
			else {
				int temp;
				temp = count;
				count = count + a + b ;
				a = b;
				b = temp;
			}
		}
		cout << count << endl;

	}	
	return 0;
}
