#include<iostream>
#include<cmath>
using namespace std;


double getDistance(int x, int y, int cx, int cy) {
	double distance = sqrt(pow(x - cx, 2) + pow(y - cy, 2));

	return distance;
}

int main() {
	int t, x1, y1, x2, y2;
	int n;
	double d1, d2;
	int i, j;
	int* cx, *cy, *r;
	int count;

	cin >> t;
	for (i = 0; i < t; i++) {
		count = 0;

		cin >> x1 >> y1 >> x2 >> y2;

		cin >> n;
		cx = new int[n];
		cy = new int[n];
		r = new int[n];

		for (j = 0; j < n; j++) {
			cin >> cx[j] >> cy[j] >> r[j];
			d1 = getDistance(x1, y1, cx[j], cy[j]);
			d2 = getDistance(x2, y2, cx[j], cy[j]);

			if (d1 <= r[j] || d2 <= r[j]) {           //if either starting point or ending point is in a circle,
				if (d1 <= r[j] && d2 <= r[j]) continue; //it should enter/break the circle
				else count++;
			}
		}

		cout << count << endl;

		delete[] cx;
		delete[] cy;
		delete[] r;
	}
	return 0;
}
