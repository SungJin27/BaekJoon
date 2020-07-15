#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t, i;
	int j;
	int k;
	int before;
	scanf("%d\n", &t);
	string sentence;
	string word;

	for (i = 0; i < t; i++) {
		//문장을 받음
		getline(cin, sentence);
		
		before = 0;
		
		for (j = 0; j < sentence.size(); j++) {
			if (sentence[j] == ' ' || j == sentence.size() -1) {
				for (k = j; k >= before; k--) {
					if (sentence[k] != ' ') cout << sentence[k];
				}
				
				if (sentence[j] == ' ') cout << ' ';
				before = j + 1;
			}
		}
		cout << endl;
	}
}
