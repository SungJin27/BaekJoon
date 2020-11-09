#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int *height = new int[9];
	int* ans = new int[7];
	int sum;
	int res = -1;
	int i;
	int j, k;
	int a, b = 0;
	
	for (i = 0; i < 9; i++) {
		cin >> height[i];
	}

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			sum = 0;
			if (i == j) continue;	

			else {
				for (k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
					else {
						sum += height[k];	//Add heights except two heights
					}
				}

				if (sum == 100) {
					for (a = 0; a < 9; a++) {
						if (a == i || a == j) continue;
						else {				//Store the height's of dwarf
							ans[b] = height[a];
							b++;
						}
					}
					break;
				}
			}
		}
		if (sum == 100) break;
	}


	sort(ans, ans + 7);

	for (i = 0; i < 7; i++) {
		cout << ans[i] << endl;
	}

	delete[] height;
	return 0;
}
