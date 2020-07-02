#include<iostream>
using namespace std;

int main() {
	string a;
	string ans;
	int i;
	for (i = 0; i < 3; i++) {
		cin >> a;
		if (a == "black") {
			if (i == 1) {
				ans = ans + '0';
			}
		}

		else if (a == "brown") {
			if (i < 2) {
				ans = ans + '1';
			}

			else {
				if (ans != "0") ans = ans + '0';
			}
		}

		else if (a == "red") {
			if (i < 2) {
				ans = ans + '2';
			}

			else {
				if (ans != "0")ans = ans + "00";
			}
		}

		else if (a == "orange") {
			if (i < 2) {
				ans += '3';
			}

			else {
				if (ans != "0")ans += "000";
			}
		}

		else if (a == "yellow") {
			if (i < 2) {
				ans += '4';
			}

			else { 
				if (ans != "0") ans += "0000";
			}
		} 

		else if (a == "green") {
			if (i < 2) {
				ans += '5';
			}

			else {
				if (ans != "0") ans += "00000";
			}
		}


		else if (a == "blue") {
			if (i < 2) {
				ans += '6';
			}

			else {
				if (ans != "0")ans += "000000"; 
			}
		}

		else if (a == "violet") {
			if (i < 2) {
				ans += '7';
			}

			else {
				if (ans != "0") ans += "0000000";
			}
		}

		else if (a == "grey") {
			if (i < 2) {
				ans += "8";
			}

			else {
				if (ans != "0") ans += "00000000";
			}
		}

		else if (a == "white") {
			if (i < 2) {
				ans += "9";
			}

			else {
				if (ans != "0") ans += "000000000";
			}
		}
	}

	cout << ans;

	return 0;
}
