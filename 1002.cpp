#include<iostream>
#include<cmath>
using namespace std;

double getDistance(int x1, int y1, int x2, int y2) {
	double distance;
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	return distance;
}

int main() {
	int t, x1, y1, r1, x2, y2, r2;
	int i;
	double d;
	double rp, rm;

	cin >> t;
	
	for (i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		d = getDistance(x1, y1, x2, y2);
		rp = r1 + r2;
		rm = abs(r1 - r2);

		if (d == 0 && r1 == r2) {
			cout << -1;
		}
		else {
			if (rp < d || rm > d) cout << 0;
			else if (rp == d || rm == d) cout << 1;
			else if (rp > d || rm < d) cout << 2;
		}
		cout << "\n";
	}
	return 0;
}
