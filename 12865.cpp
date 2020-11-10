#include<iostream>
using namespace std;

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int n, k;
	cin >> n >> k;
	int i;
	int j;
	int temp;
	
	//allocate memory
	int** P = new int*[n+1];
	for (i = 0; i <= n; i++) {
		P[i] = new int[k+1];
	}

	int* p = new int[n+1];
	int* w = new int[n+1];

	for (i = 1; i <= n; i++) {
		cin >> w[i] >> p[i];
	}

	for (i = 0; i <= k; i++) P[0][i] = 0; //initialize P

	for (i = 1; i <= n; i++) {
		P[i][0] = 0;					//initialize P
		for (j = 0; j <= k; j++) {
			if (w[i] <= j) {			//can take the stuff
				P[i][j] = max(P[i - 1][j - w[i]] + p[i], P[i - 1][j]);		//take or not
			}

			else P[i][j] = P[i - 1][j];	//cannot take the sutff
		}
	}

	cout << P[n][k] << endl;

	//deallocate memory
	for (i = 0; i <= n; i++) {
		delete[] P[i];
	}
	delete[] P;

	delete[] p;
	delete[] w;

	return 0;
}
